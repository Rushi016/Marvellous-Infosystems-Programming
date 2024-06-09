#   3. Write a program which accept file name from user and create new file
#      as Demo.txt and copy all contents from existing file into new file.
#      Accept file name through command line arguments.

import sys
import os

def CopyFile(fname1,fname2):
    try:
        Demofile = open(fname1,"a")
        ABCfile = open(fname2,"r")
        for line in ABCfile:
            Demofile.write(line)
        print("file succesfully copied")
    except FileNotFoundError as fnfobj:
        print("File not found due to ",fnfobj)
    except Exception as eobj:
        print("Invalid name due to ",eobj)

def CreateFile(ABCfile):
    exists = os.path.exists("Demo.txt")
    if not exists:
        open("Demo.txt","x")
        CopyFile("Demo.txt",ABCfile)
    else:
        open("Demo.txt","w")
        CopyFile("Demo.txt",ABCfile)

def main():
    if len(sys.argv) == 2:
        if sys.argv[1] == "--h" or sys.argv[1] == "--H":
            print("This script is use for copy contents of existing file ABC.txt into Demo.txt")
            exit()

        if sys.argv[1] == "--u" or sys.argv[1] == "--U":
            print("Usages of the script")
            print("Usages : Name_of_Python_file  ABC.txt")
            exit()

        if sys.argv[1] == "ABC.txt":
            exists = os.path.exists("ABC.txt")
            if not exists:
                print("file not found")
                print("For help --h or --H")
                print("For usage --u or --U")
                exit()
            else:
                CreateFile("ABC.txt") 

        else:
            print("Invalid Option or File not found")
            print("For help --h or --H")
            print("For usage --u or --U")
            exit()
                
    else:
        print("Invalid Argument Numbers")
        print("For help --h or --H")
        print("For usage --u or --U")
        exit()

if __name__ == "__main__":
    main()