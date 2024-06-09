#   5. Write a recursive program which accept number from user and return
#   its factorial.

fact = 1

def factorial(No):
    global fact
    if No != 0:
        fact = fact*No
        factorial(No-1)
    return fact

def main():
    Number = int(input("Enter your number : "))
    Result = factorial(Number)
    print("Factorial of {0} is {1}".format(Number,Result))

if __name__ == "__main__":
    main()

#   Output:
#   D:\Python\Marvellous Python\Python Assignments\Python Assignment 5>Python Assignment5_5.py
#   Enter your number : 5
#   Factorial of 5 is 120