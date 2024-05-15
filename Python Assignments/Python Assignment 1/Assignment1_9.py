#   9. Write a program which display first 10 even numbers on screen.

def EvenNum():
    for i in range(1,21):
        if i%2 != 0:
            continue
        else:
            print(i, end = " ")

def main():
    EvenNum()

if __name__ == "__main__":
    main()

#   Output:
#   D:\Python\Marvellous Python\Assignment 1>python Program_10.py
#   2 4 6 8 10 12 14 16 18 20