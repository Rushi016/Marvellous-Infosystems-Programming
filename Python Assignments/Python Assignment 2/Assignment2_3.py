#   3. Write a program which accept one number from user and return its factorial.

def Factorial(No):
    Ans =  1
    if No > 0:
        for i in range(1, No+1):
            Ans = i * Ans
    else:
        for i in range(-1, No-1, -1):
            Ans = i*Ans
    return Ans

def main():
    Number = int(input("Enter your number : "))
    Result = Factorial(Number)
    print("Factorial of {0} is {1}".format(Number, Result))

if __name__ == "__main__":
    main()

#   D:\Python\Marvellous Python\Python Assignment 2>python Assignment2_3.py
#   Enter your number : 5
#   Factorial of 5 is 120