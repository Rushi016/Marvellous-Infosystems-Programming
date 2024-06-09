#   4. Write a recursive program which accept number from user and return
#      summation of its digits.

sum = 0

def DigitSum(No):
    global sum
    if No != 0:
        rem = No%10
        sum = sum + rem
        DigitSum(int(No/10))
    return sum

def main():
    Number = int(input("Enter your number : "))
    Result = DigitSum(Number)
    print("Summation of digits : ",Result)

if __name__ == "__main__":
    main()

#   Output:
#   D:\Python\Marvellous Python\Python Assignments\Python Assignment 5>Python Assignment5_4.py
#   Enter your number : 879
#   Summation of digits :  24