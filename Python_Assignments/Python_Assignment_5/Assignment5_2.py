#   2. Write a recursive program which display below pattern.

i = 1

def NumDisplay(No):
    global i
    if No>=i:
        print(i, end="\t")
        i = i+1
        NumDisplay(No)

def main():
    Number = int(input("Enter your number : "))
    NumDisplay(Number)

if __name__ == "__main__":
    main()

#   Output:
#   D:\Python\Marvellous Python\Python Assignments\Python Assignment 5>Python Assignment5_2.py
#   Enter your number : 5
#   1       2       3       4       5