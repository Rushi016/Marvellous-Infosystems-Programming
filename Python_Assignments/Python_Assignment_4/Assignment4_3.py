#   3. Write a program which contains filter(), map() and reduce()
#      in it. Python application which contains one list of numbers.
#      List contains the numbers which are accepted from user. Filter
#      should filter out all such numbers which greater than or equal
#      to 70 and less than equal to 90. Map function will increase
#      each number by 10. Reduce will return product of all that numbers.

import functools

ChkNumber = lambda No : No<=90 and No>=70 
Increase = lambda No : No+10
NumProduct = lambda A, B : A*B

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

        print("Your entered list is : ", Arr)
        
        FData = list(filter(ChkNumber,Arr))
        print("Filtered List: Each element is between 70 and 90",FData)

        MData = list(map(Increase,FData))
        print("Mapped List: Each element is increase by 10",MData)

        RData = functools.reduce(NumProduct,MData)
        print("Reduced List: Product of all mapped elements is ",RData)

if __name__ == "__main__":
    main()

#   Output:
#   D:\Python\Marvellous Python\Python Assignments\Python Assignment 4>Python Assignment4_3.py
#   How many elements do you want in the list : 12
#   Enter your list elements :
#   4
#   34
#   36
#   76
#   68
#   24
#   89
#   23
#   86
#   90
#   45
#   70
#   Your entered list is :  [4, 34, 36, 76, 68, 24, 89, 23, 86, 90, 45, 70]
#   Filtered List: Each element is between 70 and 90 [76, 89, 86, 90, 70]
#   Mapped List: Each element is increase by 10 [86, 99, 96, 100, 80]
#   Reduced List: Product of all mapped elements 6538752000