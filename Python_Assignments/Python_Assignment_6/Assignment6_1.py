#   1. Design python application which creates two thread named as even
#      odd. Even thread will display first 10 even numbers and odd thread
#      will display first 10 odd numbers.

import threading
import os

def EvenNumbers():
    print("TID of Even Numbers : ",threading.get_ident())
    print("PID of Even Numbers : ",os.getpid())
    print("Odd Numbers : ")
    for i in range(2, 12):
        print("Even = ",i)
        i = i + 2

def OddNumbers():
    print("TID of Odd Numbers : ",threading.get_ident())
    print("PID of Odd Numbers : ",os.getpid())
    for i in range(1, 11):
        print("Odd = ",i)
        i = i + 1

def main():
    print("TID of Main : ",threading.get_ident())
    print("PID of Main : ",os.getpid())

    p1 = threading.Thread(target = EvenNumbers)
    p2 = threading.Thread(target = OddNumbers)

    p1.start()
    p2.start()

    p1.join()
    p2.join()

    print("End of main process")

if __name__ == "__main__":
    main()


    # Output:
    # D:\Marvellous Infosystems\Python Machine Learning with Data Science\Python Assignments\Python Assignment 6>Python Assignment6_1.py
    # TID of Main :  12952
    # PID of Main :  12560
    # TID of Even Numbers :  980
    # PID of Even Numbers :  12560
    # TID of Odd Numbers :  20880
    # Odd Numbers :
    # PID of Odd Numbers :  12560
    # Even =  2
    # Odd =  1
    # Even =  3
    # Odd =  2
    # Even =  4
    # Odd =  3
    # Odd =  4
    # Even =  5
    # Even =  6
    # Even =  7
    # Even =  8
    # Even =  9
    # Even =  10
    # Even =  11
    # Odd =  5
    # Odd =  6
    # Odd =  7
    # Odd =  8
    # Odd =  9
    # Odd =  10
    # End of main process