#   6. Write a program which accept number from user and check
#      whether that number is positive or negative or zero.

def ChkNum(No):
    if(No == 0):
        return 0
    elif(No < 0):
        return -1
    else:
        return 1

def main():
    Number = int(input("Please enter your number = "))
    flag = ChkNum(Number)

    if(flag == 0):
        print("Zero")
    elif(flag == -1):
        print("Negative Number")
    else:
        print("Positive Number")

if(__name__ == "__main__"):
    main()

#   Output:
#   D:\Python\Marvellous Python\Assignment 1>python Program_06.py
#   Please enter your number = 11
#   Positive Number

#   D:\Python\Marvellous Python\Assignment 1>python Program_06.py
#   Please enter your number = -8
#   Negative Number

#   D:\Python\Marvellous Python\Assignment 1>python Program_06.py
#   Please enter your number = 0
#   Zero