#   1. Write a recursive program which display below pattern.

def Pattern(No):
    if No>0:
        print("*", end='\t')
        Pattern(No-1)

def main():
    Number = int(input("Enter your number : "))
    Pattern(Number)

if __name__ == "__main__":
    main()

#   Output:
#   D:\Python\Marvellous Python\Python Assignments\Python Assignment 5>Python Assignment5_1.py
#   Enter your number : 5
#   *       *       *       *       *