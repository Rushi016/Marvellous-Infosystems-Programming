#   9. Write a program which accept number from user and return number of digits
#      in that number.

def CntDigit(No):
    count = 0
    while int(No) != 0:
        No = No/10
        count = count + 1
    return count

def main():
    Number = int(input("Enter your number : "))
    Count = CntDigit(Number)
    print("There are {0} digits in {1}".format(Count, Number))

if __name__ == "__main__":
    main()

#   Output:
#   D:\Python\Marvellous Python\Python Assignments\Python Assignment 2>python Assignment2_9.py
#   Enter your number : 5187934
#   There are 7 digits in 5187934