#   4. Write a program which accept one number from user and return
#      addition of its factors.

def AddFact(No):
    sum = 0
    for i in range(1,No):
        if No%i != 0:
            continue
        else:
            sum = sum + i
    return sum

def main():
    Number = int(input("Enter your number : "))
    Result = AddFact(Number)
    print("Addition of {0}'s factors are {1}".format(Number,Result))

if __name__ == "__main__":
    main()

#   Output:
#   D:\Python\Marvellous Python\Python Assignment 2>python Assignment2_4.py
#   Enter your number : 12
#   Addition of 12's factors are 16