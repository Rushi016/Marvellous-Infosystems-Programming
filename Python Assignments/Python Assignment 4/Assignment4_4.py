#   4. Write a program which contains filter(), map() and reduce()
#      in it. Python application which contains one list of numbers.
#      List contains the numbers which are accepted from user. Filter
#      should filter out all such numbers which are even. Map function
#      will calculate its square. Reduce will return addition of all
#      that numbers.

import functools

ChkEvenX = lambda No : No%2 == 0
NumSquareX = lambda No : No*No
NumAdditionX = lambda A, B : A+B

def ChkEven(No):
    if No%2 == 0:
        return No
    
def NumSquare(No):
    return No**2

def NumAddition(A,B):
    return A+B

def main():
    Size = int(input("How many elements do you want in the list : "))
    Arr = []

    print("Enter your list elements : ")
    for i in range(Size):
        Element = int(input())
        Arr.append(Element)

    print("Your entered list is : ",Arr)

    FData = list(filter(ChkEven,Arr))
    print("List after filter = ",FData)
    
    MData = list(map(NumSquare,FData))
    print("List after map = ",MData)

    RData = functools.reduce(NumAddition,MData)
    print("Output of reduce = ",RData)

if __name__ == "__main__":
    main()

#   Output:
#   D:\Python\Marvellous Python\Python Assignments\Python Assignment 4>Python Assignment4_4.py
#   How many elements do you want in the list : 10
#   Enter your list elements :
#   5
#   2
#   3
#   4
#   3
#   4
#   1
#   2
#   8
#   10
#   Your entered list is :  [5, 2, 3, 4, 3, 4, 1, 2, 8, 10]
#   List after filter =  [2, 4, 4, 2, 8, 10]
#   List after map =  [4, 16, 16, 4, 64, 100]
#   Output of reduce =  204