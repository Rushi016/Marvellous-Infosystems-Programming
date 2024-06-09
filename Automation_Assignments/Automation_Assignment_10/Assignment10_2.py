#   2. Design automation script which accept directory name and two file
#      extensions from user. Rename all files with first file extension 
#      with the second file extension.

import sys
import os
import time

def DirectoryWatcher(DirName, Extension1, Extension2):
    flag = os.path.isabs(DirName)

    if flag == False:
        DirName = os.path.abspath(DirName)
    
    exists = os.path.isdir(DirName)

    if exists:
        for foldername, subfoldername, filename in os.walk(DirName):
            for name in filename:
                if name.lower().endswith(Extension1):
                    base_name = os.path.splitext(os.path.join(foldername,name))
                    new_file_path = base_name[0] + '' + Extension2
                    os.rename(os.path.join(foldername,name),new_file_path)
            print("Extension changed successfully")
    else:
        print("There is no such a directory")
        exit()


def main():
    print("------------------------------------------------------")
    print("-----------------Directory Watcher--------------------")
    print("------------------------------------------------------")

    if len(sys.argv) == 2:
        if sys.argv[1] == "--h" or sys.argv[1] == "--H":
            print("This script is used for Renaem all files with first file extension with the second file extension")
            exit()

        elif sys.argv[1] == "--u" or sys.argv[1] == "--U":
            print("Usage of the script")
            print("Usage: Name_of_file.py   Extension1 (.txt)   Extention2 (.doc)")
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