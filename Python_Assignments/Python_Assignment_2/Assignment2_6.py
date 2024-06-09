#   6. Write a program which accept one number and display below pattern.

def Pattern(No):
    for i in range(No):
        for j in range(No):
            print("*", end = "\t")
        print()
        No = No - 1

def main():
    Number = int(input("Enter your number : "))
    Pattern(Number)

if __name__ == "__main__":
    main()

#   Output:
#   D:\Python\Marvellous Python\Python Assignment 2>python Assignment2_6.py
#   Enter your number : 5
#   *       *       *       *       *
#   *       *       *       *
#   *       *       *
#   *       *
#   *