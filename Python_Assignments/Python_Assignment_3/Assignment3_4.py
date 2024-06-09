#   4. Write a program which accept N numbers from user and store it into
#      List. Accept one another number from user and return frequency
#      of that number from List.

def NumFrequency(Data, No):
    count = 0
    for i in Data:
        if i != No:
            continue
        else:
            count = count + 1
    return count

def main():
    Size = int(input("How many elements do you want in the list : "))
    Arr = []

    print("Enter a list elements : ")
    for i in range(Size):
        No = int(input())
        Arr.append(No)
    print("Your Entered List is : ",Arr)

    Element = int(input(("Which Element of frequecy is to search in your entered list: ")))
    Frequency = NumFrequency(Arr, Element)
    print("Frequency of {0} is {1}".format(Element, Frequency))

if __name__ == "__main__":
    main()

#   Output:
#   D:\Python\Marvellous Python\Python Assignments\Python Assignment 3>Python Assignment3_4.py
#   How many elements do you want in the list : 11
#   Enter a list elements :
#   13
#   5
#   45
#   7
#   4
#   56
#   5
#   34
#   2
#   5
#   65
#   Your Entered List is :  [13, 5, 45, 7, 4, 56, 5, 34, 2, 5, 65]
#   Which Element of frequency is to search in your list : 5
#   Frequency of 5 is 3