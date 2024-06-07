#   4. Design automation script which accept two directory names and one
#      file extension. Copy all files with the specified extension from 
#      first directory into second directory. Second directory should be
#      created at run time.

import os
import sys
import time
import shutil

def DirectoryWatcher(DirName1, DirName2, Extension):
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
               if name.lower().endswith(Extension):
                print(name)
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
            print("This script is used for copy all files with the specified extension form first directory into second directory")
            exit()

        elif sys.argv[1] == "--u" or sys.argv[1] == "--U":
            print("Usage of the script")
            print("Usage: Name_of_file.py   DirName1   DirName2   Extension (.doc or .py)")
            exit()
        
        else:
            print("Invalid Option")
            print("Use --h or --H to get the help and Use --u or --U to get the Usage of the script")
            exit()

    elif len(sys.argv) == 4:
        try:
            startTime = time.time()
            DirectoryWatcher(sys.argv[1], sys.argv[2], sys.argv[3])
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
