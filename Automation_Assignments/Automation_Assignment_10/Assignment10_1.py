#   1. Design automation script which accept directory name and file extension
#      from user. Display all files with that extension.

import sys
import os
import time

def DirectoryWatcher(DirName, Extension):
    flag = os.path.isabs(DirName)

    if flag == False:
        DirName = os.path.abspath(DirName)
    
    exists = os.path.isdir(DirName)

    if exists:
        for foldername, subfoldername, filename in os.walk(DirName):
            for name in filename:
                if name.endswith(Extension):
                    print(name)
    else:
        print("There is no such a directory")
        exit()


def main():
    print("------------------------------------------------------")
    print("-----------------Directory Watcher--------------------")
    print("------------------------------------------------------")

    if len(sys.argv) == 2:
        if sys.argv[1] == "--h" or sys.argv[1] == "--H":
            print("This script is used for display all files in your dirctory")
            exit()

        elif sys.argv[1] == "--u" or sys.argv[1] == "--U":
            print("Usage of the script")
            print("Usage: Name_of_file.py   dirName   Extention")
            exit()
        
        else:
            print("Invalid Option")
            print("Use --h or --H to get the help and Use --u or --U to get the Usage of the script")
            exit()

    elif len(sys.argv) == 3:
        try:
            startTime = time.time()
            DirectoryWatcher(sys.argv[1], sys.argv[2])
            endTime = time.time()

            print("Time required for the directory watcher script is : ",startTime - endTime)
        
        except Exception as eobj:
            print("Unable to perform task due to ",eobj)
        
    else:
        print("Invalid Number of Arguments")
        print("Use --h or --H to get the help and Use --u or --U to get the Usage of the script")
        exit()

    print("------------------------------------------------------")
    print("--------- Thank you for using our script -------------")
    print("------------- Marvellous Infosystems -----------------")
    print("------------------------------------------------------")
    exit()
    
if __name__ == "__main__":
    main()

"""

Output:
D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 10>python Assignment10_1.py Demo .txt
------------------------------------------------------
-----------------Directory Watcher--------------------
------------------------------------------------------
ABC.txt
Demo.txt
Hello.txt
Time required for the directory watcher script is :  0.0
------------------------------------------------------
--------- Thank you for using our script -------------
------------- Marvellous Infosystems -----------------
------------------------------------------------------

"""