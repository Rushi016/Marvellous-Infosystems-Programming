#   1. Write a program which contains one lambda function which accepts 
#      one parameter and return power of two.

PowerOfTwo = lambda No : No**2

def main():
    Number = int(input("Enter your number : "))
    Result = PowerOfTwo(Number)
    print("Second Power of {0} is {1}".format(Number,Result))

if __name__ == "__main__":
    main()

#   Output:
#   D:\Python\Marvellous Python\Python Assignments\Python Assignment 4Python Assignment4_1.py
#   Enter your number : 4
#   Second Power of 4 is 16

#   D:\Python\Marvellous Python\Python Assignments\Python Assignment 4>Python Assignment4_1.p
#   Enter your number : 6
#   Second Power of 6 is 36