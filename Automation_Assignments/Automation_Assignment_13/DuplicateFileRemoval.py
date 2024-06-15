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

import schedule
import Marvellous
from Marvellous import sys
from Marvellous import time

def DuplicateFileRemoval():
    try:
        arr = []
        arr, time, scan = Marvellous.FindDuplicatFiles(sys.argv[1])
        Marvellous.CreateLog(arr, time, scan)
        Marvellous.DeleteDuplicateFiles(arr)

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
    D:\Marvellous_Infosystems\Python_Data_Science_Machine_Learning_with_Automation\Automation\Automation_Assignments\Automation_Assignment_13>Python DuplicateFileRemoval.py Demo 1 marvellousinfosystem@gmail.com

    Starting time of scanning : Sat Jun 15 16:37:03 2024
            Array - Copy (2).cpp
            Array - Copy.cpp
            Array.cpp
            CreateFileX.py
            DeleteFile.py
            Demo - Copy.doc
            Demo.doc
            OpenFile.py
            PPA - Copy (2).txt
            PPA - Copy (3).txt
            PPA - Copy.txt
            PPA.txt
            String.java
            String_CPP.cpp
            String_JAVA - Copy (2).java
            String_JAVA - Copy (3).java
            String_JAVA - Copy (4).java
            String_JAVA - Copy.java
            String_JAVA.java
    Total number of files scanned : 19

            Array - Copy.cpp
            Array.cpp
            Demo.doc
            PPA - Copy (3).txt
            PPA - Copy.txt
            PPA.txt
            String_JAVA - Copy (3).java
            String_JAVA - Copy (4).java
            String_JAVA - Copy.java
            String_JAVA.java
    Total number of duplicates file : 10

    Log file is successufully generated at location Marvellous\DuplicateFiles.log

    Checing internet connection...
    Internet connection is available.

    Log file name = Marvellous\DuplicateFiles.log
    Log file successfully sent through Mail

    Too 4.365614652633667 seconds to send mail

    Duplicates files deleted successfully

"""