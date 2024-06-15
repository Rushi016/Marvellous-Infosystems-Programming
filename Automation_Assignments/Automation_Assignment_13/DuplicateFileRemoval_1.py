#   1. Design automation script which performs following task.
#      Accept Directory name from user and delete all duplicate files from 
#      the specified directory by considering the checksum of files.
#      Create one Directory named as Marvellous and inside that directory
#      create log file which maintains all names of duplicate files which are
#      deleted.
#      Name of that log file should contains the date and time at which that
#      file gets created.
#      Accept duration in minutes from user and perform task of duplicate file
#      removal after the specific time interval.
#      Accept Mail id from user and send the attachment of the log file.
#      Mail body should contains statistics about the operation of duplicate 
#      file removal.

import sys
import os
import hashlib
import time
import urllib.error
import psutil
import urllib.request
import smtplib
import schedule
from email import encoders
from email.mime.text import MIMEText
from email.mime.base import MIMEBase
from email.mime.multipart import MIMEMultipart

def is_connected():
    try:
        print("Checing internet connection...")
        urllib.request.urlopen('http://www.google.com',timeout = 5)
        print("Internet connection is available.")
        return True
    except urllib.error.URLError as err:
        print("Failed to connect to the internet:",err)
        return False
    
def MailSender(filename,toaddress,time,startTime,fileScanned,cntDuplicate):
    try:
        fromaddr = "rushi.sable716@gmail.com"
        toaddr = toaddress

        msg = MIMEMultipart()

        msg['From'] = fromaddr
        msg['To'] = toaddr
        
        body = f"""
        Hello {toaddr}
        Welcome to Marvellous Infosystems.
        Please find attached doucument which contains name of duplicates files which are deleted.
        Log file is created at : {time}

        Starting time of scanning : {startTime}
        Total number of files scanned : {fileScanned}
        Total number of duplicate files : {cntDuplicate}

        This is auto generated mail.

        Thanks and regards,
        Rsuhikesh Vitthal Sable
        Marvellous Infosystems
        {toaddr,time}
        """

        Subject = """
        Marvellous Infosystems Process log generated at : {time}
        """

        msg['Subject'] = Subject
        msg.attach(MIMEText(body,'plain'))
        attachment = open(filename,"rb")
        print(f"Log file name = {filename}")
        p = MIMEBase('application','octet-stream')
        p.set_payload(attachment.read())
        encoders.encode_base64(p)
        p.add_header('Content-Disposition',f"attachment; filename = {filename}")
        msg.attach(p)
        s = smtplib.SMTP('smtp.gmail.com',587)
        s.starttls()
        
        passkey = "ptsx jbpd cypr eynd"
        s.login(fromaddr,passkey)
        
        text = msg.as_string()
        s.sendmail(fromaddr,toaddr,text)
        s.quit()

        print("Log file successfully sent through Mail")

    except Exception as E:
        print("Unable to send mail.",E)


def hashfile(path, blocksize = 1024):
    fobj = open(path, 'rb')
    hasher = hashlib.md5()

    fdata = fobj.read(blocksize)

    while len(fdata) > 0:
        hasher.update(fdata)
        fdata = fobj.read(blocksize)

    fobj.close()

    return hasher.hexdigest()

def FindDuplicatFiles(DirName):
    Flag = os.path.isabs(DirName)

    if not Flag:
        DirName = os.path.abspath(DirName)

    exists = os.path.isdir(DirName)

    dups = {}
    Files_Scan = 0

    if not exists:
        print("There is no such directory named 'Demo'")
        exit()

    else:
        Start_Time = time.ctime()
        print(f"\nStarting time of scanning : {Start_Time}")
        for DirName, SubDirName, FileList in os.walk(DirName):
            for file_name in FileList:
                print('\t%s'% file_name)
                Files_Scan += 1
                file_path = os.path.join(DirName, file_name)
                file_hash = hashfile(file_path)

                if file_hash in dups:
                    dups[file_hash].append(file_path)
                else:
                    dups[file_hash] = [file_path]
        
        print(f"Total number of files scanned : {Files_Scan}")
        return dups, Start_Time, Files_Scan
    
DuplicateFilesCount = lambda x : len(x) > 1

def CreateLog(dict, start_time, file_scan,FileName = "DuplicateFiles.log",DirName = "Marvellous"):
    exists = os.path.isdir(DirName)

    if not exists:
        os.mkdir(DirName)

    FileName = os.path.join(DirName,FileName)

    with open(FileName, 'w+') as fobj:

        seperator = "-"*100
        fobj.writelines(seperator+"\n")
        fobj.writelines("Marvellous Duplicate Files Log"+"\n")
        fobj.writelines("Log file create at : "+time.ctime()+"\n")
        fobj.writelines(seperator+"\n")
        fobj.writelines("Duplicates Found\nThe following files are identical\n")

        iCnt = 0
        iDup = 0
        Results = list(filter(DuplicateFilesCount, dict.values()))
        if len(Results) > 0:
            for result in Results:
                for subresult in result:
                    iCnt += 1
                    if iCnt >= 2:
                        subresult = os.path.split(subresult)
                        fobj.writelines('\t%s\n'%subresult[1])
                        print('\t%s'% subresult[1])
                        iDup+=1
                iCnt = 0 

            print(f"Total number of duplicates file : {iDup}")
            print(f"Log file is successufully generated at location {FileName}")

        else:
            print("No duplicate files found")
            exit()

    connected = is_connected()

    if connected:
        startTime = time.time()
        MailSender(FileName,sys.argv[3],time.ctime(),start_time,file_scan,iDup)
        endTime = time.time()

        print('Too %s seconds to send mail' % (endTime - startTime))
    else:
        print("There is no internet connection")
        exit()        

def DeleteDuplicateFiles(dict):
    Results = list(filter(DuplicateFilesCount,dict.values()))

    iCnt = 0
    if len(Results) > 0:
        for result in Results:
            for subresult in result:
                iCnt = iCnt + 1
                if iCnt >= 2:
                    os.remove(subresult)
            iCnt = 0
        print("Duplicates files deleted successfully")
    else:
        print("Duplicates files not found")
        exit()

def DuplicateFileRemoval():
    try:
        arr = []
        arr, time, scan = FindDuplicatFiles(sys.argv[1])
        CreateLog(arr, time, scan)
        DeleteDuplicateFiles(arr)

    except ValueError as vobj:
        print(vobj)
    except Exception as eobj:
        print(eobj)

def main():
    if len(sys.argv) == 2:
        if sys.argv[1].lower() == "--h":
            print("This script is used for Duplicate File Removal.")
            exit()

        elif sys.argv[2].lower() == "--u":
            print("Usage of the script: ")
            print("Usage: DuplicateFileRemoval.py   Demo   TimeIntervaInMinutes   YourE-MailId")
            exit()

        else:
            print("Invalid option")
            print("Used --H for Help and used --U for Usages")
            exit()

    elif len(sys.argv) == 4:
        try:
            schedule.every(int(sys.argv[2])).minutes.do(DuplicateFileRemoval)
            while True:
                schedule.run_pending()
                time.sleep(1)

        except ValueError:
            print("Error: Invalid datatype of input")

        except Exception as E:
            print("Error: Invalid input",E)
    
    else:
        print("Invalid number of arguments")
        print("Used --H for Help and used --U for Usages")
        exit()

if __name__ == "__main__":
    main()

"""

    Output:
    D:\Marvellous_Infosystems\Python_Data_Science_Machine_Learning_with_Automation\Automation\Automation_Assignments\Automation_Assignment_13>Python DuplicateFileRemoval.py Demo 1 rushi.sable016@gmail.com 

    Starting time of scanning : Sat Jun 15 12:46:08 2024
            Array.cpp
            CreateFileX.py
            DeleteFile - Copy (2).py
            DeleteFile - Copy (3).py
            DeleteFile - Copy.py
            DeleteFile.py
            Demo.doc
            OpenFile.py
            PPA - Copy (2).txt
            PPA - Copy (3).txt
            PPA - Copy (4).txt
            PPA - Copy.txt
            PPA.txt
            String.java
            String_CPP.cpp
            String_JAVA.java
    Total number of files scanned : 16
            DeleteFile - Copy (3).py
            DeleteFile - Copy.py
            DeleteFile.py
            PPA - Copy (3).txt
            PPA - Copy (4).txt
            PPA - Copy.txt
            PPA.txt
    Total number of duplicates file : 7
    Log file is successufully generated at location Marvellous\DuplicateFiles.log
    Checing internet connection...
    Internet connection is available.
    Log file name = Marvellous\DuplicateFiles.log
    Log file successfully sent through Mail
    Too 4.218937397003174 seconds to send mail
    Duplicates files deleted successfully

"""