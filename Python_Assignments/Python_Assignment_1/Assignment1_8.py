#   8. Write a program which accept number from user and print that
#      number of "*" on screen.

def NumStar(No):
    for i in range(No):
        print("*", end = " ")

def main():
    Number = int(input("Please enter your number : "))
    NumStar(Number)

if __name__ == "__main__":
    main()

#   Output:
#   D:\Python\Marvellous Python\Assignment 1>python Program_08.py
#   Please enter your number : 5
#   * * * * *