#   2. Write a program which accept N numbers from user and store it into
#      List. Return Maximum number from that List.

def MaxElement(Data):
    Max = Data[0]
    for i in Data:
        if Max<i:
            Max = i
        else:
            continue
    return Max

def main():
    Size = int(input("How many elements do you want in the list : "))
    Arr = list()

    print("Enter a list elements")
    for i in range(Size):
        No = int(input())
        Arr.append(No)
    print("Your Entered List Elements are : ", Arr)

    Max = MaxElement(Arr)
    print("Maximum element of the given list is : ",Max)

if __name__ == "__main__":
    main()

#   Output:
#   D:\Python\Marvellous Python\Python Assignments\Python Assignment 3>Python Assignment3_2.py
#   How many elements do you want in the list : 7
#   Enter a list elements
#   13
#   5
#   45
#   7
#   4
#   56
#   34
#   Your Entered List Elements are :  [13, 5, 45, 7, 4, 56, 34]
#   Maximum element of the given list is :  56