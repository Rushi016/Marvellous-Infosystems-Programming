#   2. Write a program which accept file name from user and open that file
#      and display contents of that file on screen.

import os

def main():
    print("Enter a file name do you want to open for reading : ")
    fname = input()
    print()

    if os.path.exists(fname):
        fobj = open(fname)
        Data = fobj.read()
        print(Data)
    else:
        print("{0} is not exists in the current directory.".format(fname))

if __name__ == "__main__":
    main()

    # Output:
    # D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 9>Python Assignment9_2.py
    # Enter a file name do you want to open for reading : 
    # Demo.txt

    # Marvellous Infosystems by Piyush Khairnar
    # Karve Road Pune 411004.
    # Educating for better tomorrow

    # D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 9>Python Assignment9_2.py
    # Enter a file name do you want to open for reading : 
    # Marvellous.txt

    # Marvellous.txt is not exists in the current directory.