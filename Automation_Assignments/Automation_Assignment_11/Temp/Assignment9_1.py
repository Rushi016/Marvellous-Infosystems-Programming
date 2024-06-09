#   1. Write a program which accepts file name from user and check whether
#      that file exists in current directory or not.

import os

def main():
    fname = input("Enter your file name or file path that you want to search in current directory :  ")

    if os.path.exists(fname):
        fobj = open(fname)
        print("This file is EXISTS in current directory : \n",fobj)
    else:
        print("This ile is NOT EXISTS in current directory")

if __name__ == "__main__":
    main()

    # Output:
    # D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 9>Python Assignment9_1.py
    # Enter your file name or file path that you want to search in current directory : Demo.txt
    # This file is EXISTS in current directory :
    #  <_io.TextIOWrapper name='Demo.txt' mode='r' encoding='cp1252'>

    # D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 9>Python Assignment9_1.py
    # Enter your file name or flie path that you want to search in current directory : D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 9\Demo.txt
    # This file is EXISTS in current directory :
    #  <_io.TextIOWrapper name='D:\\Marvellous Infosystems\\Python Data Science Machine Learning with Automation\\Automation\\Automation Assignments\\Automation Assignment 9\\Demo.txt' mode='r' encoding='cp1252'>

    # D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 9>Python Assignment9_1.py
    # Enter your file name or file path that you want to search in current directory :  Mavellous.txt
    # File does NOT EXISTS in current directory