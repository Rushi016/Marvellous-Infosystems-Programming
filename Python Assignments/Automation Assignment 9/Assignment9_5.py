#   5. Accept file name and string from user and return the frequency of that
#      string from file.

import sys
import os

def StringFrequency(fname, word):

    iCnt = 0
    fobj = open(fname, 'r')

    file_data1 = fobj.read()
    print("Demo file Data:")
    print(file_data1, end = '\n')

    Split_Data = file_data1.split()
   
    for line in Split_Data:
        if(line == word):
            iCnt = iCnt + 1
    return iCnt

def main():
    if len(sys.argv) == 2:
        if sys.argv[1] == '--h' or sys.argv[1] == '--H':
            print("This script is used for search a string in that file give the frequency of that string")
            exit()
        if sys.argv[1] == '--u' or sys.argv[1] == '--U':
            print("Usage of the script : ")
            print("Usage: Name_Python_file  Name_Txt_file   String")
            exit()
        else:
            print("Invalid Option")
            print("Use '--h' or '--H' to get the help and Use '--u' or '--U' to get the Usage")
            exit()
    elif len(sys.argv) == 3:
            exists = os.path.exists(sys.argv[1])
            if exists:
               print()
               print(StringFrequency(sys.argv[1], sys.argv[2]))
               exit()
            else:
                print("File not found OR Invalid Name")
                print("Use '--h' or '--H' to get the help and Use '--u' or '--U' to get the Usage")
                exit()
    else:
        print("Invalid Number Of Arguments")
        print("Use '--h' or '--H' to get the help and Use '--u' or '--U' to get the Usage")
        exit()

if __name__ == "__main__":
    main()

"""
Output : 
D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 9>Python Assignment9_5.py Demo.txt Marvellous

Demo file Data:
Hello,
Marvellous Infosystems by PIYUSH MANOHAR KHIRNAR Marvellous
Thank You Marvellous
3
"""