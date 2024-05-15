#   1. Write a program which accept N numbers from user and store it into
#      into List. Return addition of all elements from that List.

def AddElement(Data):
    Sum = 0
    for i in Data:
        Sum = Sum + i
    return Sum

def main():
    size = int(input(("How many elements do you want in the list = ")))
    Arr = list()

    print("Enter a list elements : ")
    for i in range(size):
        No = int(input())
        Arr.append(No)
    print("Your Entered List is : ", Arr)

    Result = AddElement(Arr)
    print("Summation of all elements is : ",Result)

if __name__ == "__main__":
    main()

#   Output: 
#   D:\Python\Marvellous Python\Python Assignments\Python Assignment 3>Python Assignment3_1.py
#   How many elements do you want in the list = 6
#   Enter a list elements :
#   13
#   5
#   45
#   7
#   4
#   56
#   Your Entered List is :  [13, 5, 45, 7, 4, 56]
#   Summation of all elements is :  130