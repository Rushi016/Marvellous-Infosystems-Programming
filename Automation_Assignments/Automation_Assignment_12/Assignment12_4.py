#   4. Design automation script which accept directory name and mail id 
#      from user and create log file in that directory which contains information 
#      of running processes as its name, PID, Username. After creating log file
#      to the specified mail.

#      Usage: ProcInfoLog.py Demo marvellousinfosystem@gmail.com

#      Demo is name of Directory.
#      marvellousinfosystem@gmail.com is the mail id.

import os
import time
import sys
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
    
def MailSender(filename,toaddress,time):
    try:
        fromaddr = "rushi.sable716@gmail.com"
        #print("1")
        toaddr = toaddress

        msg = MIMEMultipart()

        msg['From'] = fromaddr
        msg['To'] = toaddr
        #print("3")
        body = f"""
        Hello {toaddr}
        Welcome to Marvellous Infosystems.
        Please find attached doucument which contains Log of Running process.
        Log file is created at : {time}

        This is auto generated mail.

        Thanks and regards,
        Rsuhikesh Vitthal Sable
        Marvellous Infosystems
        {toaddr,time}
        """

        Subject = """
        Marvellous Infosystems Process log generated at : {time}
        """
        #print("4")
        msg['Subject'] = Subject
        msg.attach(MIMEText(body,'plain'))
        attachment = open(filename,"rb")
        p = MIMEBase('application','octet-stream')
        p.set_payload(attachment.read())
        encoders.encode_base64(p)
        p.add_header('Content-Disposition',f"attachment; filename = {filename}")
        msg.attach(p)
        s = smtplib.SMTP('smtp.gmail.com',587)
        s.starttls()
        #print("5")
        passkey = "ptsx jbpd cypr eynd"
        s.login(fromaddr,passkey)
        #print("6")
        text = msg.as_string()
        s.sendmail(fromaddr,toaddr,text)
        s.quit()

        print("Log file successfully sent through Mail")

    except Exception as E:
        print("Unable to send mail.",E)

def GetProcessInfo():
    listprocess = []

    for proc in psutil.process_iter(['pid', 'name', 'username']):
        try:
            listprocess.append(proc.info)
        except (psutil.NoSuchProcess, psutil.AccessDenied, psutil.ZombieProcess):
            pass

    return listprocess

def createlog(FileName = "Marvellous.log",DirName = sys.argv[1]):
    exists = os.path.isdir(DirName)

    if not exists:
        os.mkdir(DirName)

    FileName = os.path.join(DirName,FileName)

    fobj = open(FileName, 'w+')

    seperator = "-"*100
    fobj.writelines(seperator+"\n")
    fobj.writelines("Marvellous Process Log"+"\n")
    fobj.writelines("Log file create at : "+time.ctime()+"\n")
    fobj.writelines(seperator+"\n")

    Arr = GetProcessInfo()

    for data in Arr:
        fobj.writelines('%s \n'%data)

    fobj.writelines(seperator+"\n")

    print(f"Log file is successufully generated at location {FileName}")

    connected = is_connected()

    if connected:
        startTime = time.time()
        MailSender(FileName,sys.argv[2],time.ctime())
        endTime = time.time()

        print('Too %s seconds to send mail' % (endTime - startTime))
    else:
        print("There is no internet connection")

def main():
    if len(sys.argv) == 2:
        if sys.argv[1].lower() == "--h":
            print("This script is used for Create log which contains information of running processes")
            exit()

        elif sys.argv[1].lower() == "--u":
            print("Usage: PythonFile    DirName   YourMailId")
            exit()

        else:
            print("Invalid Option")
            print("Use --h or --H to get the Help of file and --u or --U to get the Usage of file")
            exit()
            

    elif len(sys.argv) == 3:
        try:
            createlog()
        except Exception as eobj:
            print(eobj)

    else:
        print("Invalid Number of agurments")
        print("Use --h or --H to get the Help of file and --u or --U to get the Usage of file")
        exit()

if __name__ == "__main__":
    main()

"""

Output:
D:\Marvellous_Infosystems\Python_Data_Science_Machine_Learning_with_Automation\Automation\Automation_Assignments\Automation_Assignment_12>Python Assignment12_4.py Demo rushi.sable016@gmail.com
Log file is successufully generated at location Demo\Marvellous.log
Checing internet connection...
Internet connection is available.
Log file successfully sent through Mail
Too 4.78473687171936 seconds to send mail

D:\Marvellous_Infosystems\Python_Data_Science_Machine_Learning_with_Automation\Automation\Automation_Assignments\Automation_Assignment_12>Python Assignment12_4.py Demo piyushkhairnar@y
mail.com 
Log file is successufully generated at location Demo\Marvellous.log
Checing internet connection...
Internet connection is available.
Log file successfully sent through Mail
Too 5.969762563705444 seconds to send mail

D:\Marvellous_Infosystems\Python_Data_Science_Machine_Learning_with_Automation\Automation\Automation_Assignments\Automation_Assignment_12>Python Assignment12_4.py Demo marvellousinfosy
stem@gmail.com
Log file is successufully generated at location Demo\Marvellous.log
Checing internet connection...
Internet connection is available.
Log file successfully sent through Mail
Too 4.763254642486572 seconds to send mail

D:\Marvellous_Infosystems\Python_Data_Science_Machine_Learning_with_Automation\Automation\Automation_Assignments\Automation_Assignment_12>Python Assignment12_4.py Demo avinash.bhosale@
uts.com        
Log file is successufully generated at location Demo\Marvellous.log
Checing internet connection...
Internet connection is available.
Log file successfully sent through Mail
Too 8.57091760635376 seconds to send mail

D:\Marvellous_Infosystems\Python_Data_Science_Machine_Learning_with_Automation\Automation\Automation_Assignments\Automation_Assignment_12>Python Assignment12_4.py Demo nawalesatish1997@gmail.com
Log file is successufully generated at location Demo\Marvellous.log
Checing internet connection...
Internet connection is available.
Log file successfully sent through Mail
Too 5.998335838317871 seconds to send mail

"""
