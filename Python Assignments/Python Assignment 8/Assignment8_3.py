#   3. Write a program which contains one class named as Numbers.
#      Arithmetic class contains one instance variables as Value.
#      Inside init method initialise that instance variables to 
#      the value which is accepted from user.
#      There are four instance methods inside class as ChkPrime(),
#      ChkPerfect(), SumFactors(), Factors().
#      ChkPrime() method will returns true if number is prime otherwise
#      return false.
#      ChkPerfect() method will returns true if number is prefect otherwise
#      return false.
#      Factors() method will display all factors of instance variable.
#      SumFactors() method will return addition of all factors. Use this
#      method in any another method as a helper method if required.
#      After designing the above class call all instance methods by creating
#      multiple objects.

class Numebrs:

    def __init__(self):
        self.Value = 0

        print("Enter a number : ")
        self.Value = int(input())

    def ChkPrime(self):
        count = 0

        for i in range(1, self.Value + 1):
            if self.Value % i == 0:
                count = count + 1

        if count > 2:
            return False
        elif count < 2:
            return -1
        else:
            return True


    def ChkPerfect(self):
        Sum = 0

        for i in range(1, self.Value):
            if self.Value % i == 0:
                Sum = Sum + i

        if Sum == self.Value:
            return True
        else:
            return False

    def SumFactors(self):
        Sum = 0

        for i in range(1, self.Value):
            if self.Value % i == 0:
                Sum = Sum + i

        return Sum

    def Factors(self):
        print("Factors of {0} are : ".format(self.Value))

        for i in range(1, self.Value):
            if self.Value % i == 0:
                print(i, end = '\t')

print("-------------------------------------------")
Obj1 = Numebrs()
if Obj1.ChkPrime() == True:
    print("It is a prime number")
elif Obj1.ChkPrime() == -1:
    print("It is neither prime nor composite")
else:
    print("It is not a prime number")

if Obj1.ChkPerfect() == True:
    print("It is a perfect number")
else:
    print("It is not a perfect number") 

print("Sum of all factors is ",Obj1.SumFactors())

Obj1.Factors()

print("\n-------------------------------------------")
Obj2 = Numebrs()
if Obj2.ChkPrime() == True:
    print("It is a prime number")
elif Obj2.ChkPrime() == -1:
    print("It is neither prime nor composite")
else:
    print("It is not a prime number")

if Obj2.ChkPerfect() == True:
    print("It is a perfect number")
else:
    print("It is not a perfect number") 

print("Sum of all factors is ",Obj2.SumFactors())

Obj2.Factors()

print("\n-------------------------------------------")
Obj3 = Numebrs()
if Obj3.ChkPrime() == True:
    print("It is a prime number")
elif Obj3.ChkPrime() == -1:
    print("It is neither prime nor composite")
else:
    print("It is not a prime number")

if Obj3.ChkPerfect() == True:
    print("It is a perfect number")
else:
    print("It is not a perfect number") 

print("Sum of all factors is ",Obj3.SumFactors())

Obj3.Factors()

print("\n-------------------------------------------")
Obj4 = Numebrs()
if Obj4.ChkPrime() == True:
    print("It is a prime number")
elif Obj4.ChkPrime() == -1:
    print("It is neither prime nor composite")
else:
    print("It is not a prime number")

if Obj4.ChkPerfect() == True:
    print("It is a perfect number")
else:
    print("It is not a perfect number") 

print("Sum of all factors is ",Obj4.SumFactors())

Obj4.Factors()

print("\n-------------------------------------------")

    # Output:
    # D:\Marvellous Infosystems\Python Machine Learning with Data Science\Python\Python Assignments\Python Assignment 8>Python Assignment8_3.py
    # -------------------------------------------
    # Enter a number : 
    # 85
    # It is not a prime number
    # It is not a perfect number
    # Sum of all factors is  23
    # Factors of 85 are : 
    # 1       5       17
    # -------------------------------------------
    # Enter a number :
    # 10
    # It is not a prime number
    # It is not a perfect number
    # Sum of all factors is  8
    # Factors of 10 are :
    # 1       2       5
    # -------------------------------------------
    # Enter a number :
    # 9
    # It is not a prime number
    # It is not a perfect number
    # Sum of all factors is  4
    # Factors of 9 are :
    # 1       3
    # -------------------------------------------
    # Enter a number :
    # 17
    # It is a prime number
    # It is not a perfect number
    # Sum of all factors is  1
    # Factors of 17 are :
    # 1
    # -------------------------------------------