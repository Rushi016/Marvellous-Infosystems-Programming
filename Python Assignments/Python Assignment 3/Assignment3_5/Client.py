#   5. Write a program which accept N numbers from user and store it
#      into List. Return addition of all prime numbers from that List.
#      Main python file accepts N numbers from user and pass each number
#      to ChkPrime() function which is part of our user defined module
#      named as MarvellousNum. Name of the function from main python file
#      should be ListPrime().

import MarvellousNum

def ListPrime(Data):
    Sum = 0
    PrimeList = list()

    for i in range(len(Data)):
        No = MarvellousNum.ChkPrime(Data[i])
        if No == 0:
           continue
        else:
            Sum = Sum + No
            PrimeList.append(No)
    
    return Sum, PrimeList

def main():
    Size = int(input("How many elements do you want in the list : "))
    Arr = []

    print("Enter your list elements : ")
    for i in range(Size):
        No = int(input())
        Arr.append(No)
    print("Your Entered List is : ",Arr)

    Result, PrimeList = ListPrime(Arr)

    print("Prime Number List : ",PrimeList)
    print("Sum of all prime numbers : ",Result)

if __name__ == "__main__":
    main()

#   Output:
#   D:\Python\Marvellous Python\Python Assignments\Python Assignment 3\Assignment3_5>Python Client.py
#   How many elements do you want in the list : 11
#   Enter your list elements :
#   13
#   5
#   45
#   7
#   4
#   56
#   10
#   34
#   2
#   5
#   8
#   Your Entered List is :  [13, 5, 45, 7, 4, 56, 10, 34, 2, 5, 8]
#   Prime Number List :  [13, 5, 7, 2, 5]
#   Sum of all prime numbers :  32