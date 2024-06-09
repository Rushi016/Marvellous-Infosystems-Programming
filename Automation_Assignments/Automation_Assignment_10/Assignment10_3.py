#   3. Design automation script which accept two directory names. Copy 
#      all files from first directory into second directory. Second directory
#      should be created at run time.

import os
import sys
import time
import shutil

def DirectoryWatcher(DirName1, DirName2):
    flag1 = os.path.isabs(DirName1)
    flag2 = os.path.isabs(DirName2)

    if flag1 == False:
        DirName1 = os.path.abspath(DirName1)
    if flag2 == False:
        DirName2 = os.path.abspath(DirName2)

    print(DirName1)
    print(DirName2)
    exists1 = os.path.isdir(DirName1)
    exists2 = os.path.isdir(DirName2)

    if not exists1:
        print("There is no such a directory : ",DirName1)
        exit()

    if not exists2:
        os.mkdir(DirName2)
        print(DirName2)
    
    if exists1 and exists2:
        for foldername, subfoldername, filename in os.walk(DirName1):
            for name in filename:
               source_file = os.path.join(foldername, name)
               destination_file = os.path.join(DirName2, name)
               shutil.copy2(source_file, destination_file)
               print(f"copied : {source_file} to {destination_file}")   

def main():
    print("------------------------------------------------------")
    print("-----------------Directory Watcher--------------------")
    print("------------------------------------------------------")

    if len(sys.argv) == 2:
        if sys.argv[1] == "--h" or sys.argv[1] == "--H":
            print("This script is used for copy all files from list directory into second directory.")
            exit()

        elif sys.argv[1] == "--u" or sys.argv[1] == "--U":
            print("Usage of the script")
            print("Usage: Name_of_file.py   DirName1   DirName2")
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
D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 10>Python Assignment10_3.py Demo Temp
------------------------------------------------------
-----------------Directory Watcher--------------------
------------------------------------------------------
D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 10\Demo
D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 10\Temp
copied : D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 10\Demo\ABC.doc to D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 10\Temp\ABC.doc
copied : D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 10\Demo\Assignment9_1.py to D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 10\Temp\Assignment9_1.py
copied : D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 10\Demo\Assignment9_2.py to D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 10\Temp\Assignment9_2.py
copied : D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 10\Demo\Assignment9_3.py to D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 10\Temp\Assignment9_3.py
copied : D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 10\Demo\Assignment9_4(1).py to D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 10\Temp\Assignment9_4(1).py
copied : D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 10\Demo\Assignment9_4(2).py to D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 10\Temp\Assignment9_4(2).py
copied : D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 10\Demo\Assignment9_5.py to D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 10\Temp\Assignment9_5.py
copied : D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 10\Demo\Demo.doc to D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 10\Temp\Demo.doc
copied : D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 10\Demo\Hello.doc to D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 10\Temp\Hello.doc
Time required for the directory watcher script is :  -0.10004305839538574
------------------------------------------------------
--------- Thank you for using our script -------------
------------- Marvellous Infosystems -----------------
------------------------------------------------------

"""