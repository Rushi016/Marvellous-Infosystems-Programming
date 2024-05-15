#   2. Write a program which contains one lambda function which accepts
#      two parameters and return its multiplication.

MultiOfTwo = lambda A, B : A*B

def main():
    Number1 = int(input("Enter a first number : "))
    Number2 = int(input("Enter a second number : "))

    Result = MultiOfTwo(Number1,Number2)
    print("Multiplication of {0} and {1} is {2} ".format(Number1,Number2,Result))

if __name__ == "__main__":
    main()

#   Output:
#   D:\Python\Marvellous Python\Python Assignments\Python Assignment 4>Python Assignment4_2.p
#   Enter a first number : 4
#   Enter a second number : 3
#   Multiplication of 4 and 3 is 12

#   D:\Python\Marvellous Python\Python Assignments\Python Assignment 4Python Assignment4_2.py
#   Enter a first number : 6
#   Enter a second number : 3
#   Multiplication of 6 and 3 is 18