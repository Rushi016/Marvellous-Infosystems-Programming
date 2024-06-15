import os
import sys
import time
import hashlib
import MailSenderNetworking

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
        
        print(f"Total number of files scanned : {Files_Scan} \n")
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

            print(f"Total number of duplicates file : {iDup} \n")
            print(f"Log file is successufully generated at location {FileName} \n")

        else:
            print("No duplicate files found")
            exit()

    connected = MailSenderNetworking.is_connected()

    if connected:
        startTime = time.time()
        MailSenderNetworking.MailSender(FileName,sys.argv[3],time.ctime(),start_time,file_scan,iDup)
        endTime = time.time()

        print('Too %s seconds to send mail\n' % (endTime - startTime))
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
