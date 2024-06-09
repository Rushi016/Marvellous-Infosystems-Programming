#   3. Write a program which contains one function named as Add()
#      which accepts two numbers from user and return addition of
#      of that two numbers.

def Add(No1, No2):
    sum = No1 + No2
    return sum

def main():
    print("Enter a first number : ")
    No1 = int(input())

    print("Enter a second number : ")
    No2 = int(input())

    Addition = Add(No1, No2)
    print("Addtion of two numbers is ",Addition)

if(__name__ == "__main__"):
    main() 

#   Output:
#   D:\Python\Marvellous Python\Assignment 1>python Program_03.py
#   Enter a first number :
#   11
#   Enter a second number :
#   5
#   Addtion of two numbers is  16  