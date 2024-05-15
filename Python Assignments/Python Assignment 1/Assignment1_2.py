#   2. Write a program which contains one function named as ChkNum()
#      which accept one parameter as number. If number is even then 
#      if should display "Even number" otherwise display "Odd number"
#      on console.

def ChkNum(No):
    if(No%2 == 0):
        print("Even Number")
    
    else:
        print("Odd Number")

def main():
    print("Please enter your number = ")
    Number = int(input())
    ChkNum(Number)

if(__name__ == "__main__"):
    main()

#   Output:
#   D:\Python\Marvellous Python\Assignment 1>python Program_02.py
#   Please enter your number =
#   11
#   Odd Number

#   D:\Python\Marvellous Python\Assignment 1>python Program_02.py
#   Please enter your number =
#   8
#   Even Number