#   7. Write a program which contains one function that accept
#      one number from user and returns true if number is divisible
#      by 5 otherwise return false.

def DivFive(No):
    if No%5 != 0:
        return False
    else:
        return True

def main():
    Number = int(input("Please enter your number : "))
    bool = DivFive(Number)

    if bool == False:
        print("False")
    else:
        print("True")

if(__name__ == "__main__"):
    main()

#   Output:
#   D:\Python\Marvellous Python\Assignment 1>python Program_07.py
#   Please enter your number : 8
#   False

#   D:\Python\Marvellous Python\Assignment 1>python Program_07.py
#   Please enter your number : 25
#   True