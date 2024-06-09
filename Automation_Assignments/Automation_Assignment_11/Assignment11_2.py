#   2. Design automation script which accept directory name and write names of
#      of duplicate files from that directory into log file as Log.txt. Log.txt
#      file should be created into current directory.

from sys import argv
import os
import hashlib
import time    

def hashfile(path, blocksize = 1024):
    afile = open(path, 'rb')
    hasher = hashlib.md5()
    
    buf = afile.read(blocksize)
    
    while len(buf) > 0:
        hasher.update(buf)
        buf = afile.read(blocksize)
    
    afile.close()
    
    return hasher.hexdigest()


def FindDuplicates(DirPath):
    flag = os.path.isabs(DirPath)

    if flag == False:
        DirPath = os.path.abspath(DirPath)

    exists = os.path.isdir(DirPath)

    dups = {}

    if exists:
        for DirName, SubDirs, FileList in os.walk(DirPath):
            for file_name in FileList:
                file_path = os.path.join(DirName,file_name)
                file_hash = hashfile(file_path)
                
                if file_hash in dups:
                   dups[file_hash].append(file_path)
                else:
                    dups[file_hash] = [file_path]
        
        return dups
    else:
        print("Invalid path")

FilesCount = lambda x: len(x) > 1

def PrintDuplicates(dict):
    Results = list(filter(FilesCount, dict.values()))

    if len(Results) > 0:
        fobj = open("Log.txt", "w+")
        
        fobj.writelines("Duplicates found\nThe following files are identical\n")
        iCnt = 0
        for result in Results:
            for subresult in result:
                iCnt += 1
                if iCnt >= 2:
                    subresult = os.path.split(subresult)
                    fobj.writelines('\t%s'%subresult[1])
                    fobj.writelines('\n')
            iCnt = 0  
    else:
        print("No duplicate files found")

def main():
    print("--------------Marvellous Infosystems By Piyush Khairnar------------")

    print("-----------------Application name is",argv[0],"------------")
    print(' ')

    if len(argv) != 2:
        print("Invalid Number of Arguments")
        exit()

    if argv[1] == '--h' or argv[1] == '--H':
        print("This script is used to write names of duplicate files from that directory into log file named as Log.txt")
        exit()

    if argv[1] == '--u' or argv[1] == '--U':
        print("Usage: Application_Name   DirectoryName")

    try:
        arr = []
        StartTime = time.time()
        arr = FindDuplicates(argv[1])
        PrintDuplicates(arr)
        EndTime = time.time()

        print("Time required for this script is : ",EndTime - StartTime)
        print("Check Log.txt file")
    
    except ValueError:
        print("Invalid datatype of input ")

    except Exception as E:
        print("Invalid Input : ",E)

if __name__ =="__main__":
    main()

"""

Output:
D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 11>python Assignment11_2.py Temp
--------------Marvellous Infosystems By Piyush Khairnar------------
-----------------Application name is Assignment11_2.py ------------        

Duplicates found
The following files are identical
        ABC.doc
        Hello.doc
        Assignment9_2 - Copy (3).py
        Assignment9_2 - Copy.py
        Assignment9_2.py
        Assignment9_3.py
Time required for this script is :  0.0041046142578125

"""