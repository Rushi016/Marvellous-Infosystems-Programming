#   5. Design python application which contains two threads named as
#      thread1 and thread2. Thread1 display 1 to 50 on screen and thread2
#      display 50 to 1 in reverse order on screen. After execution of 
#      thread1 gets completed then schedule thread2.

import threading

def thread1():
    for i in range(1, 51):
        print("for = ",i)
    
def thread2():
    for i in range(50, 0, -1):
        print("rev = ",i)

def main():
    p1 = threading.Thread(target = thread1, args = ())
    p2 = threading.Thread(target = thread2, args = ())

    p1.start()
    p1.join()

    p2.start()
    p2.join()

    print("exit form main")

if __name__ == "__main__":
    main()

    # Output:
    # D:\Marvellous Infosystems\Python Machine Learning with Data Science\Python Assignments\Python Assignment 6>Python Assignment6_5.py
    # for =  1
    # for =  2
    # for =  3
    # for =  4
    # for =  5
    # for =  6
    # for =  7
    # for =  8
    # for =  9
    # for =  10
    # for =  11
    # for =  12
    # for =  13
    # for =  14
    # for =  15
    # for =  16
    # for =  17
    # for =  18
    # for =  19
    # for =  20
    # for =  21
    # for =  22
    # for =  23
    # for =  24
    # for =  25
    # for =  26
    # for =  27
    # for =  28
    # for =  29
    # for =  30
    # for =  31
    # for =  32
    # for =  33
    # for =  34
    # for =  35
    # for =  36
    # for =  37
    # for =  38
    # for =  39
    # for =  40
    # for =  41
    # for =  42
    # for =  43
    # for =  44
    # for =  45
    # for =  46
    # for =  47
    # for =  48
    # for =  49
    # for =  50
    # rev =  50
    # rev =  49
    # rev =  48
    # rev =  47
    # rev =  46
    # rev =  45
    # rev =  44
    # rev =  43
    # rev =  42
    # rev =  41
    # rev =  40
    # rev =  39
    # rev =  38
    # rev =  37
    # rev =  36
    # rev =  35
    # rev =  34
    # rev =  33
    # rev =  32
    # rev =  31
    # rev =  30
    # rev =  29
    # rev =  28
    # rev =  27
    # rev =  26
    # rev =  25
    # rev =  24
    # rev =  23
    # rev =  22
    # rev =  21
    # rev =  20
    # rev =  19
    # rev =  18
    # rev =  17
    # rev =  16
    # rev =  15
    # rev =  14
    # rev =  13
    # rev =  12
    # rev =  11
    # rev =  10
    # rev =  9
    # rev =  8
    # rev =  7
    # rev =  6
    # rev =  5
    # rev =  4
    # rev =  3
    # rev =  2
    # rev =  1
    # exit form main