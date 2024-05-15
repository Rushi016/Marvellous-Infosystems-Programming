#   5. Write a program which accept one number for user and check whether
#      number is prime or not.

def ChkPrime(No):
    count = 0
    for i in range(1,No+1):
        if No%i == 0:
            count = count + 1
            if count > 2:
                break
    return count
                
def main():
    Number = int(input("Enter your number : "))
    if Number < 0:
        No = -Number
        count = ChkPrime(No)
    else:
        count = ChkPrime(Number)

    if count > 2:
        print("{0} is not Prime Number".format(Number))
    elif count < 2:
        print("{0} is neither prime nor composite".format(Number))
    else:
        print("{0} is Prime Number".format(Number))

if __name__ == "__main__":
    main()

#   Output:
#   D:\Python\Marvellous Python\Python Assignment 2>python Assignment2_5.py
#   Enter your number : -1
#   -1 is neither prime nor composite

#   D:\Python\Marvellous Python\Python Assignment 2>python Assignment2_5.py
#   Enter your number : 0
#   0 is neither prime nor composite

#   D:\Python\Marvellous Python\Python Assignment 2>python Assignment2_5.py
#   Enter your number : 1
#   1 is neither prime nor composite

#   D:\Python\Marvellous Python\Python Assignment 2>python Assignment2_5.py
#   Enter your number : 5
#   5 is Prime Number

#   D:\Python\Marvellous Python\Python Assignment 2>python Assignment2_5.py
#   Enter your number : 1331
#   1331 is not Prime Number