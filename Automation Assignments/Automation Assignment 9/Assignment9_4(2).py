#   4. Write a program which accept two file names from user and compare contents
#      of both the files. If both files contains same contents the display
#      success otherwise display failure. Accept names of both files from
#      command line.

import sys
import os

def CompareFileContent(fname1, fname2):
    flag = False
    fobj1 = open(fname1,"r")
    fobj2 = open(fname2,"r")

    f1_data = fobj1.readlines()
    f2_data = fobj2.readlines()

    if len(f1_data) != len(f2_data):
        print("Not idential")
        exit()
    else:
        for line1 in range(len(f1_data)):
            line2 = line1
            for line2 in range(len(f2_data)):
                if line1 == line2:
                    if(f1_data[line1] == f2_data[line2]):
                        print("Line {0} : {1}".format(line1,f1_data[line1]))
                        print("Line {0} : {1}".format(line2,f1_data[line2]))
                    else:
                        flag = True
            if flag == True:
                break           
        print()

        if flag == True:
            print("Content of two files are NOT identical")
        else:
            print("Content of two files are identical")

    fobj1.close()
    fobj2.close()
                  
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

    """
    Outut:
    D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 9>Python "Assignment9_4(2).py" "Demo.txt" "Hello.txt"
    Line 0 : Hello,

    Line 0 : Hello,

    Line 1 : Marvellous Infosystems by PIYUSH MANOHAR KHIRNAR

    Line 1 : Marvellous Infosystems by PIYUSH MANOHAR KHIRNAR

    Line 2 : Thank You
    Line 2 : Thank You

    Content of two files are identical

    """