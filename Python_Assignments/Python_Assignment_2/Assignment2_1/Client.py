#   1. Create on module named as Arithmetic which contains 4 functions
#      as Add() for addition, Sub() for subtraction, Mult() for multiplication
#      and Div() for division. All functions accepts two parameters as
#      number and perform the operation. Write on python program which call
#      all the functions from Arithmetic module by accepting the parameters 
#      from Arithmetic module by accepting the parameters from user.

import Arithmetic

def main():
    A = int(input("Enter a first number = "))
    B = int(input("Enter a second number = "))

    Add = Arithmetic.Add(A, B)
    print("The addition of {0} and {1} is {2}".format(A, B, Add))

    Sub = Arithmetic.Sub(A, B)
    print("The subtraction of",A,"and",B,"is",Sub)

    Mult = Arithmetic.Mult(A, B)
    print("The multiplication of {0} and {1} is {2}".format(A, B, Mult))

    Div = Arithmetic.Div(A, B)
    if Div == -1:
        print("Divide By Zero Error") 
    else:
        print("The division of {0} and {1} is {2}".format(A, B, Div))

if __name__ == "__main__":
    main()

#   Output:
#   D:\Python\Marvellous Python\Python Assignments\Python Assignment 2\Assignment2_1>Python Client.py
#   Enter a first number = 10
#   Enter a second number = 20
#   The addition of 10 and 20 is 30
#   The subtraction of 10 and 20 is -10
#   The multiplication of 10 and 20 is 200
#   The division of 10 and 20 is 0.5

#   D:\Python\Marvellous Python\Python Assignments\Python Assignment 2\Assignment2_1>Python Client.py
#   Enter a first number = 10
#   Enter a second number = 0
#   The addition of 10 and 0 is 10
#   The subtraction of 10 and 0 is 10
#   The multiplication of 10 and 0 is 0
#   Divide By Zero Error