#   3. Design automation script which accept directory name from user and create
#      log file in that directory which contains information of running processes
#      as its name, PID, Username.

import os
import time
import sys
import psutil

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

    fobj = open(FileName, 'w')

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
        if sys.argv[1] == "--h" or sys.argv[1] == "--H":
            print("This script is used for Create log which contains information of running processes")
            exit()

        elif sys.argv[1] == "--u" or sys.argv[1] == "--U":
            print("Usage: PythonFile    DirName")
            exit()

        else:
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