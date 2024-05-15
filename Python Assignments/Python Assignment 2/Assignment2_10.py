#   10. Write a program which accept number from user and return addition 
#      of digits in that number.

def DigitAdd(No):
    sum = 0
    while int(No) != 0:
        rem = No%10
        sum = sum + int(rem)
        No = No/10
    return sum

def main():
    Number = int(input("Enter your number : "))
    if Number < 0:
        No = -Number
        Addition = DigitAdd(No)
    else:
        Addition = DigitAdd(Number)
    
    print("{0} is the sum of the digits in {1}".format(Addition, Number))

if __name__ == "__main__":
    main()

#   Output:
#   D:\Python\Marvellous Python\Python Assignments\Python Assignment 2>python Assignment2_10.py
#   Enter your number : 5187934
#   37 is the sum of the digits in 5187934