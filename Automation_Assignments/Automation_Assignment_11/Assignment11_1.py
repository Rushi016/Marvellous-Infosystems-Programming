#   1. Design automation script which accept directory name and display checksum
#      of all files.

from sys import argv
import os
import hashlib
import time

def DisplayCheckSum(DirPath):
    flag = os.path.isabs(DirPath)

    if flag == False:
        DirPath = os.path.abspath(DirPath)

    exists = os.path.isdir(DirPath)

    if exists:
        for DirName, SubDirs, FileList in os.walk(DirPath):
            print("Current Folder : ",DirName)
            print(' ')
            for file_name in FileList:
                file_path = os.path.join(DirName, file_name)
                try:
                    fobj = open(file_path,'rb')
                    blocksize = 1024
                    file_data = fobj.read(blocksize)
                    file_Checksum = hashlib.md5(file_data).hexdigest()
                    file_path = os.path.split(file_path)
                    print(f"\t{'%s'%file_path[1]} : {file_Checksum}")
                except Exception as eobj:
                    print(f"Error reading file {'%s'%file_path[1]}: {eobj}")
                print(' ')


def main():
    print("--------------Marvellous Infosystems By Piyush Khairnar------------")

    print("-----------------Application name is",argv[0],"------------")
    print(' ')

    if len(argv) != 2:
        print("Invalid Number of Arguments")
        exit()

    if argv[1] == '--h' or argv[1] == '--H':
        print("This script is used to traverse the specific diretory and display checksum of files")
        exit()

    if argv[1] == '--u' or argv[1] == '--U':
        print("Usage: Application_Name   DirectoryName")

    try:
        StartTime = time.time()
        DisplayCheckSum(argv[1])
        EndTime = time.time()

        print("Time required for this script is : ",EndTime - StartTime)
    
    except ValueError:
        print("Invalid datatype of input ")

    except Exception as E:
        print("Invalid Input : ",E)

if __name__ =="__main__":
    main()

"""

Output:
D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 11>python Assignment11_1.py Temp
--------------Marvellous Infosystems By Piyush Khairnar------------
-----------------Application name is Assignment11_1.py ------------

Current Folder :  D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 11\Temp

        ABC - Copy.doc : e9132c6561a3a39b442fe5d8d5bb11a7

        ABC.doc : e9132c6561a3a39b442fe5d8d5bb11a7

        Assignment9_1.py : a319eb38548605846f3b63060bd56059

        Assignment9_2 - Copy (2).py : c25cd078664f5ee348a1b5f8ba5bf152

        Assignment9_2 - Copy (3).py : c25cd078664f5ee348a1b5f8ba5bf152

        Assignment9_2 - Copy.py : c25cd078664f5ee348a1b5f8ba5bf152

        Assignment9_2.py : c25cd078664f5ee348a1b5f8ba5bf152

        Assignment9_3 - Copy.py : 58899be6435c56aee1906b642dced54f

        Assignment9_3.py : 58899be6435c56aee1906b642dced54f

        Assignment9_4(1).py : 5357b09b06219204cabeba57367994dc

        Assignment9_4(2).py : 394e36262454a36c2dc739469ea550ee

        Assignment9_5.py : 3c1021a5f29a0938857d0bf899064f6b

        Demo.doc : 586e419b07d4ddb4337bd1598786b263

        Hello.doc : e9132c6561a3a39b442fe5d8d5bb11a7

Time required for this script is :  0.02068924903869629

"""