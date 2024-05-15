#   3. Write a program which accept N numbers from user and store it
#      into List. Return Minimum number from that List.

def MinElement(Data):
    Min = Data[0]
    for i in Data:
        if Min>i:
            Min = i
        else:
            continue
    return Min

def main():
    Size = int(input("How many elements do you want in the list : "))
    Arr = []

    print("Enter a list elements : ")
    for i in range(Size):
        No = int(input())
        Arr.append(No)
    print("Your Entered List is ",Arr)

    Min = MinElement(Arr)
    print("Minimum element of the list is : ",Min)

if __name__ == "__main__":
    main()

#   Output:
#   D:\Python\Marvellous Python\Python Assignments\Python Assignment 3>Python Assignment3_3.py
#   How many elements do you want in the list : 4
#   Enter a list elements :
#   13
#   5
#   45
#   7
#   Your Entered List is  [13, 5, 45, 7]
#   Minimum element of the list is :  5