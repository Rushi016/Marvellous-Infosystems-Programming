#   5. Write a program which contains filter(), map() and reduce()
#      in it. Python application which contains one list of numbers.
#      which are accepted from user. Filter should filter out all
#      prime numbers. Map function will multiply each number by 2.
#      Reduce will return Maximum number from that numbers. 

import MarvellousFMR

def MaxNumber(A, B):
    if A>B:
        return A
    else:
        return B

def MulByTwo(No):
    return No*2

def ChkPrime(No):
    count = 0
    for i in range(1, No+1):
        if No%i == 0:
            count = count + 1
            if count > 2:
                break

    if count == 2:
        return True
     
def main():
    Size = int(input("How many elements do you want in the list : "))
    if Size == 0:
        print("Input must be greater than ZERO")
        main()
    else:
        Arr = list()

        print("Enter your list elements : ")
        for i in range(Size):
            Element = int(input())
            Arr.append(Element)

        print("Your entered list is : ",Arr)

        FData = list(MarvellousFMR.filterX(ChkPrime,Arr))
        print("List after filter : ",FData)

        if len(FData) == 0:
            print("Since the filter list is empty we cannot execute 'map' and 'reduce' operations.")
            exit()
        else:
            MData = list(MarvellousFMR.mapX(MulByTwo,FData))
            print("List after map : ",MData)

        RData = MarvellousFMR.reduceX(MaxNumber,MData)
        print("Output of reduce : ",RData)

if __name__ == "__main__":
    main()

#   Output:
#   D:\Python\Marvellous Python\Python Assignments\Python Assignment 4>Python Assignment4_5.py
#   How many elements do you want in the list : 8
#   Enter your list elements :
#   2
#   70
#   11
#   10
#   17
#   23
#   31
#   77
#   Your entered list is :  [2, 70, 11, 10, 17, 23, 31, 77]
#   List after filter :  [2, 11, 17, 23, 31]
#   List after map :  [4, 22, 34, 46, 62]
#   Output of reduce :  62