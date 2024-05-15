#   2. Write a program which contains one class named as Circle.
#      Circle class contains three instance variables as Radius, Area,
#      Circumference. That class contains one class variable as PI
#      which is initialise to 3.14.
#      There are three instance methods inside class as Accept(), CalculateArea(),
#      CalculateCircumference(), Display().
#      Accept() method will accept value of Radius from user.
#      CalculateArea() method will calculate area of circle and store it into
#      instance variable Circumference.
#      And Display() method will display value of all the instance variables as Radius,
#      Area, Circumference.
#      After designing the above class call all instace method by creating multiple objects.

class Circle:
    PI = 3.14

    def __init__(self):
       self.Radius = 0.0
       self.Area = 0.0
       self.Circumference = 0.0
       self.Accept()

    def Accept(self):
        self.Radius = int(input("Enter the radius of a circle : "))
        self.CalculateArea()
        self.CalculateCircumference()
        self.Display()

    def CalculateArea(self):
        self.Area = Circle.PI * self.Radius**2
        
    def CalculateCircumference(self):
        self.Circumference = 2 * Circle.PI * self.Radius

    def Display(self):
        print("Radius : ",self.Radius)
        print("Area : ",self.Area)
        print("Circumference : ",self.Circumference)
        print(vars(self))
        print()
    
Obj1 = Circle()
# Obj1.Accept()
# Obj1.CalculateArea()
# Obj1.CalculateCircumference()
# Obj1.Display()

Obj2 = Circle()
# Obj2.Accept()
# Obj2.CalculateArea()
# Obj2.CalculateCircumference()
# Obj2.Display()

Obj3 = Circle()
# Obj3.Accept()
# Obj3.CalculateArea()
# Obj3.CalculateCircumference()
# Obj3.Display()

Obj4 = Circle()
# Obj4.Accept()
# Obj4.CalculateArea()
# Obj4.CalculateCircumference()
# Obj4.Display()

    # Output:
    # D:\Marvellous Infosystems\Python Machine Learning with Data Science\Python Assignments\Python Assignment 7>Python Assignment7_2.py

    # Enter the radius of a circle : 5
    # Radius :  5
    # Area :  78.5
    # Circumference :  31.400000000000002
    # {'Radius': 5, 'Area': 78.5, 'Circumference': 31.400000000000002}

    # Enter the radius of a circle : 36
    # Radius :  36
    # Area :  4069.44
    # Circumference :  226.08
    # {'Radius': 36, 'Area': 4069.44, 'Circumference': 226.08}

    # Enter the radius of a circle : 4
    # Radius :  4
    # Area :  50.24
    # Circumference :  25.12
    # {'Radius': 4, 'Area': 50.24, 'Circumference': 25.12}

    # Enter the radius of a circle : 2
    # Radius :  2
    # Area :  12.56
    # Circumference :  12.56
    # {'Radius': 2, 'Area': 12.56, 'Circumference': 12.56}