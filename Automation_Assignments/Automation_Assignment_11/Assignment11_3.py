#   3. Design automation script which accept directory name and delete all
#      duplicate files from that directory. Write names of duplicate files
#      from that directory into log file named as Log.txt, Log.txt should be
#      created into current directory.

from sys import argv
import os
import hashlib

FilesCount = lambda x: len(x) > 1

def DeleteFiles(dict):
    Results = list(filter(FilesCount,dict.values()))

    iCnt = 0
    if len(Results) > 0:
        for result in Results:
            for subresult in result:
                iCnt = iCnt + 1
                if iCnt >= 2:
                    os.remove(subresult)
            iCnt = 0
        print("Duplicate files deleted successfully")
    else:
        print("Duplicates files not found")

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
        arr = FindDuplicates(argv[1])
        PrintDuplicates(arr)
        DeleteFiles(arr)

        print("Check Log.txt file")
    
    except ValueError:
        print("Invalid datatype of input ")

    except Exception as E:
        print("Invalid Input : ",E)

if __name__ =="__main__":
    main()

"""

Output:
D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 11>python Assignment11_3.py Temp 
--------------Marvellous Infosystems By Piyush Khairnar------------
-----------------Application name is Assignment11_3.py ------------

Duplicates files deleted successfully
Check Log.txt file

"""