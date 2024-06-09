#   4. Write a program which accept two file names from user and compare contents
#      of both the files. If both files contains same contents the display
#      success otherwise display failure. Accept names of both files from
#      command line.

import sys
import os
import filecmp

def CompareFileContent(fname1, fname2):
    open(fname1,"r")
    open(fname2,"r")

    compare = filecmp.cmp(fname1,fname2)

    if compare == True:
        print("Success")
    else:
        print("Failure")

def main():
    if len(sys.argv) == 2:
        if sys.argv[1] == "--h" or sys.argv[1] == "--H":
            print("This script is used for comapare contents of both the files")
            exit()

        if sys.argv[1] == "--u" or sys.argv[1] == "--U":
            print("Usage of the script")
            print("Usage: Python_File.py  Demo.txt  Hello.txt")
            exit()
        else:
            print("Invalid option")
            print("Use --h or --H to the Help of the script OR Use --u or --U to get the Usage of the script")
            exit()

    if len(sys.argv) == 3:
        print("1")
        if (((sys.argv[1] == "Demo.txt") and (sys.argv[2] == "Hello.txt")) or ((sys.argv[2] == "Hello.txt") and (sys.argv[1] == "Demo.txt"))):
            exists1 = os.path.exists("Demo.txt")
            exists2 = os.path.exists("Hello.txt")

            if not exists1 or not exists2:
                print("File not found or Invalid file name")
                exit()
            else:
                CompareFileContent("Demo.txt","Hello.txt")

    else:
        print("Invalid number of arguments")
        print("Use --h or --H to get the help")
        print("User --u or --H to the Usage")
        exit()

if __name__ == "__main__":
    main()