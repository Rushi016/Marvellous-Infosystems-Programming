#   1. Write a program which contains one class named as Demo.
#      Demo class contains two instance variables as no1, no2.
#      That class contains two instance method of class as Fun
#      Gun which displays values of instance variables.
#      Initialise instance variable in init method by accepting
#      the values from user.

#      After creating the class create the two objects of Demo class as
#      Obj1 = Demo(11,21)
#      Obj2 = Demo(51,101)

#      Now call the instance methods as
#      Obj1.Fun()
#      Obj2.Fun()
#      Obj1.Gun()
#      Obj2.Gun()

class Demo:
    Value = 0

    def __init__(self, A, B):
        self.No1 = A
        self.No2 = B

    def Fun(self):
        print("Inside Fun Method")
        print("Fun : ",self.No1)
        print("Fun : ",self.No2)

    def Gun(self):
        print("Inside Gun Method")
        print("Gun : ",self.No1)
        print("Gun : ",self.No2)

Obj1 = Demo(11, 21)
Obj2 = Demo(51, 101)

Obj1.Fun()
Obj2.Fun()
Obj1.Gun()
Obj2.Gun()

    # Output:
    # D:\Marvellous Infosystems\Python Machine Learning with Data Science\Python Assignments\Python Assignment 7>Python Assignment7_1.py

    # Inside Fun Method
    # Fun :  11
    # Fun :  21
    # Inside Fun Method
    # Fun :  51
    # Fun :  101
    # Inside Gun Method
    # Gun :  11
    # Gun :  21
    # Inside Gun Method
    # Gun :  51
    # Gun :  101