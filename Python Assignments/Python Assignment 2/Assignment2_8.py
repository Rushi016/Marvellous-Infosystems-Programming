#   8. Write a program which accept one number and display below pattern.

def Pattern(No):
    for i in range(2, No+2):
        for j in range(1, i):
            print(j, end = "\t")
        print()

def main():
    Number = int(input("Enter your number : "))
    Pattern(Number)

if __name__ == "__main__":
    main()

#   Output:
#   D:\Python\Marvellous Python\Python Assignment 2>python Assignment2_8.py
#   Enter your number : 5
#   1
#   1       2
#   1       2       3
#   1       2       3       4
#   1       2       3       4       5