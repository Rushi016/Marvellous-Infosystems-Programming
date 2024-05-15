#   3. Design python application which creates two threads as evenlist
#      and oddlist. Both the threads accept list of integers as parameter.
#      Evenlist thread add all even elements from input list and display
#      the addition. Oddlist thread add all odd elements from input list
#      and display the addition.

import threading
import os

def EvenList(Data):
    print("TID of EvenList = ",threading.get_ident())
    print("PID of EvenList = ",os.getpid())
    print("PPID of EvenList = ",os.getppid())

    Sum = 0
    for i in Data:
        if((i % 2) == 0):
            Sum = Sum + i

    print("Sum of even list is ",Sum)

def OddList(Data):
    print("TID of OddList = ",threading.get_ident())
    print("PID of OddList = ",os.getpid())
    print("PPID of OddList = ",os.getppid())

    Sum = 0
    for i in Data:
        if((i % 2) != 0):
            Sum = Sum + i

    print("Sum of odd list is ",Sum)


def main():
    print("TID of Main = ",threading.get_ident())
    print("PID of Main = ",os.getpid())
    print("PPID of Main = ",os.getppid())

    Size = int(input("Enter a size of your list : "))
    Arr = list()

    print("Enter a list element : ")
    for i in range(Size):
        Element = int(input())
        Arr.append(Element)

    p1 = threading.Thread(target = EvenList, args = (Arr, ))
    p2 = threading.Thread(target = OddList, args = (Arr, ))

    p1.start()
    p2.start()

    p1.join()
    p2.join()

    print("exit from main")

if __name__ == "__main__":
    main()

    # Output:
    # D:\Marvellous Infosystems\Python Machine Learning with Data Science\Python Assignments\Python Assignment 6>Python Assignment6_3.py
    # TID of Main =  19452
    # PID of Main =  18056
    # PPID of Main =  13444
    # Enter a size of your list : 10
    # Enter a list element :
    # 1
    # 2
    # 3
    # 4
    # 5
    # 6
    # 7
    # 8
    # 9
    # 10
    # TID of EvenList =  18964
    # PID of EvenList =  18056
    # TID of OddList =  22496
    # PID of OddList =  18056
    # PPID of EvenList =  13444
    # PPID of OddList =  13444
    # Sum of even list is  30
    # Sum of odd list is  25
    # exit from main