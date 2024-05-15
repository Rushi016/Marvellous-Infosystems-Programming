#   3. Write a program which contains one class named as Arithmetic.
#      Arithmetic class contains three instance variables as Value1, Value2.
#      Inside init method initialise all instance variables to 0;
#      There are three instance methods inside class as Accept(), Addition(), Substraction()
#      Multiplication(), Division().
#      Accept() method will accept value of Value1 and Value2 from user.
#      Addition() method will perform substraction of Value1, Value2 and return result.
#      Substraction() method will perform multiplication of Value1, Value2 and return result.
#      Multiplication() method will perform multiplication of Value1, Value2 and return result.
#      Division() method will perform multiplication of Value1, Value2 and return result.
#      After designing the above class call all instance methods by creating multiple objects.

class Arithmetic:

    def __init__(self):
        self.Value1 = 0
        self.Value1 = 0

    def Accept(self):
        print()
        self.Value1 = int(input("Enter first number : "))
        self.Value2 = int(input("Enter second number : "))

    def Addition(self):
        return self.Value1 + self.Value2

    def Substraction(self):
        return self.Value1 - self.Value2

    def Multiplication(self):
        return self.Value1 * self.Value2

    def Division(self):
        try:
            return self.Value1 / self.Value2
        except ZeroDivisionError as zobj:
            print("Expected Error : ",zobj)

Obj1 = Arithmetic()
Obj1.Accept()
print("Addition is : ",Obj1.Addition())
print("Substraction is : ",Obj1.Substraction())
print("Multiplication is : ",Obj1.Multiplication())
print("Division is : ",Obj1.Division())

Obj2 = Arithmetic()
Obj2.Accept()
print("Addition is : ",Obj2.Addition())
print("Substraction is : ",Obj2.Substraction())
print("Multiplication is : ",Obj2.Multiplication())
print("Division is : ",Obj2.Division())

Obj3 = Arithmetic()
Obj3.Accept()
print("Addition is : ",Obj3.Addition())
print("Substraction is : ",Obj3.Substraction())
print("Multiplication is : ",Obj3.Multiplication())
print("Division is : ",Obj3.Division())

Obj4 = Arithmetic()
Obj4.Accept()
print("Addition is : ",Obj4.Addition())
print("Substraction is : ",Obj4.Substraction())
print("Multiplication is : ",Obj4.Multiplication())
print("Division is : ",Obj4.Division())

# Output:
# D:\Marvellous Infosystems\Python Machine Learning with Data Science\Python\Python Assignments\Python Assignment 7>Python Assignment7_3.py

# Enter first number : 10
# Enter second number : 5
# Addition is :  15
# Substraction is :  5
# Multiplication is :  50
# Division is :  2.0

# Enter first number : 5
# Enter second number : 10
# Addition is :  15
# Substraction is :  -5
# Multiplication is :  50
# Division is :  0.5

# Enter first number : 0 
# Enter second number : 10
# Addition is :  10
# Substraction is :  -10
# Multiplication is :  0
# Division is :  0.0

# Enter first number : 10
# Enter second number : 0
# Addition is :  10
# Substraction is :  10
# Multiplication is :  0
# Expected Error :  division by zero
# Division is :  None