#   3. Write a recursive program which display below pattern.

def DisplayNum(No):
    if No>0:
        print(No, end="\t")
        DisplayNum(No-1)

def main():
    Number = int(input("Enter your number : "))
    DisplayNum(Number)

if __name__ == "__main__":
    main()

#   Output:
#   D:\Python\Marvellous Python\Python Assignments\Python Assignment 5>Python Assignment5_3.py
#   Enter your number : 5
#   5       4       3       2       1