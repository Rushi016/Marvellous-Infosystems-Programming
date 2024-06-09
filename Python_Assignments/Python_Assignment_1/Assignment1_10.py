#   10. Write a program which accept name from user and display
#       length of its name.

def NameLen(str):
    return len(str)

def main():
    str = input("Please enter your name : ")
    length = NameLen(str)
    
    print(length)

if __name__ == "__main__":
    main()

#   Output:
#   D:\Python\Marvellous Python\Assignment 1>python Program_09.py
#   Please enter your name : Marvellous
#   10