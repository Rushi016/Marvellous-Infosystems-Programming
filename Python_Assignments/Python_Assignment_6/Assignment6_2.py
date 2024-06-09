#   2. Design python application which creates two threads as evenfactor
#      and oddfactor. Both the thread accept one parameter as integer.
#      Evenfactor thread will display addition of even factors of given
#      number and oddfactor will display addition of odd factors of given
#      number. After execution of both the thread gets completed main
#      thread should display message as "exit from main".

import threading
import os

def EvenFactor(iNo):
    print("TID of EvenFactor = ",threading.get_ident())
    print("PID of EvenFactor = ",os.getpid())
    print("PPID of EvenFactor = ",os.getppid())

    iSum = 0
    for i in range(1,iNo):
        if((i % 2) == 0 and (iNo % i) == 0):
            iSum = iSum + i
    print("Sum of even factors : ",iSum)


def OddFactor(iNo):
    print("TID of OddFactor = ",threading.get_ident())
    print("PID of OddFactor = ",os.getpid())
    print("PPID of OddFactor = ",os.getppid())

    iSum = 0
    for i in range(1,iNo):
        if((i % 2) != 0 and (iNo % i) == 0):
            iSum = iSum + i
    print("Sum of odd factors : ",iSum)

def main():
    print("TID of Main = ",threading.get_ident())
    print("PID of Main = ",os.getpid())
    print("PPID of Main = ",os.getppid())

    iValue = int(input("Enter your number : "))

    p1 = threading.Thread(target = EvenFactor, args = (iValue, ))
    p2 = threading.Thread(target = OddFactor, args = (iValue, ))

    p1.start()
    p2.start()

    p1.join()
    p2.join()

    print("exit from main")

if __name__ == "__main__":
    main() 

    # Output:
    # D:\Marvellous Infosystems\Python Machine Learning with Data Science\Python Assignments\Python Assignment 6>Python Assignment6_2.py
    # TID of Main =  17392
    # PID of Main =  10660
    # PPID of Main =  13444
    # Enter your number : 18
    # TID of EvenFactor =  17184
    # PID of EvenFactor =  10660
    # TID of OddFactor =  18712
    # PPID of EvenFactor =  13444
    # Sum of even factors :  8
    # PID of OddFactor =  10660
    # PPID of OddFactor =  13444
    # Sum of odd factors :  13
    # exit from main