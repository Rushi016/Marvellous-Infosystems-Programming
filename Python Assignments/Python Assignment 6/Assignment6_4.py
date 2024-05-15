#   4. Design python application which creates three threads as small,
#      capital, digits. All the threads accepts string as parameter. Small
#      thread display number of small characters, capital thread display
#      number of capital characters and digits thread display number of
#      digits. Display id and name of each thread.

import threading

def small(Data):
    print("small ID : ",threading.get_ident())
    print("Name : ",threading.current_thread().name)

    for i in Data:
        if i <= 'z' and i >= 'a':
            print("small = ",i)

def CAPITAL(Data):
    print("CAPITAL ID : ",threading.get_ident())
    print("Name : ",threading.current_thread().name)

    for i in Data:
        if i <= 'Z' and i >= 'A':
            print("CAPITAL = ",i)

def Digits(Data):
    print("Digits ID : ",threading.get_ident())
    print("Name : ",threading.current_thread().name)

    for i in Data:
        if i < '9' and i >= '0':
            print("Digits = ",i)

def main():
    String = input("Enter a string : ")

    print("Main ID : ",threading.get_ident())
    print("Name : ",threading.current_thread().name)

    p1 = threading.Thread(target = small, args = (String, ))
    p2 = threading.Thread(target = CAPITAL, args = (String, ))
    p3 = threading.Thread(target = Digits, args = (String, ))

    p1.start()
    p2.start()
    p3.start()
    
    p1.join()
    p2.join()
    p3.join()

    print("exit from main")
if __name__ == "__main__":
    main()

    # Output:
    # D:\Marvellous Infosystems\Python Machine Learning with Data Science\Python Assignments\Python Assignment 6>Python Assignment6_4.py
    # Enter a string : Marvellous 187PD_Rushikesh
    # Main ID :  4460
    # Name :  MainThread
    # small ID :  5960
    # Name :  Thread-1 (small)
    # CAPITAL ID :  8036
    # Name :  Thread-2 (CAPITAL)
    # CAPITAL =  M
    # CAPITAL =  P
    # CAPITAL =  D
    # CAPITAL =  R
    # small =  a
    # Digits ID :  3316
    # small =  r
    # Name :  Thread-3 (Digits)
    # small =  v
    # Digits =  1
    # small =  e
    # Digits =  8
    # small =  l
    # small =  l
    # small =  o
    # small =  u
    # small =  s
    # small =  u
    # small =  s
    # small =  h
    # small =  i
    # small =  k
    # small =  e
    # small =  s
    # small =  h
    # Digits =  7
    # exit from main