#   2. Write a program which contains one class named as BankAccount.
#      BankAccount class contains two instance variables as Name & Amount.
#      That class contains one class variables as ROI which is initialise to 10.5
#      Inside init method initialise all name and amount variables by accepting
#      the values from user.
#      There are Four instance methods inside class as Display(), Deposit(),
#      Withdraw(), CalculateIntrest().
#      Deposit() method will accept the amount from user and add that value in
#      class instance variable Amount.
#      Withraw() method will accept amount to be withdrawn from user and subtract
#      that amount from class instance variable Amount.
#      CalculateIntrest() method calculate the interest based on Amount by considering
#      rate of interest which is Class variable as ROI.
#      And Display() method will display value of all the instance variables as Name and Amount.
#      After designing the above class call all instance methods by creating multiple objects.

class BankAccount:
    ROI = 10.5
    Years = 5

    def __init__(self):
        self.name = 0
        self.amount = 0
        self.deposit = 0
        self.withdraw = 0
        self.intrest = 0
        print()

        print("*** Welcome to Marvellous Infosystems Bank ***")
        print("Coustomer Profile")
        self.name = input("Enter Your Name : ")
        try:
            self.amount = int(input("Enter Your Bank Balance : "))
        except ValueError as Vobj:
            print("Invalid Amount : ",Vobj)
            return
        except Exception as Eobj:
            print("Ivalid Amount : ",Eobj)
            return
        
        self.Deposit()
        self.Withdraw()
        self.CalculateIntrest()
        self.Display()

    def Deposit(self):
        print("Do you want to deposite money in your account?")
        press = input("Press 'Y' OR 'N' = ")
        if press != 'Y' and press != 'N':
            print("Invalid Option")
            return
        else:
            if press == 'N':
                return
            else:
                try:
                    self.deposit = int(input("How much money will you deposit in your bank account? : "))
                except ValueError as Vobj:
                    print("Expected Error : ",Vobj)
                    return
                except Exception as Eobj:
                    print("Expected Error : ",Eobj)
                    return
                if self.deposit <= 0:
                    print("Invalid Amount")
                    return
                else:
                    self.amount = self.amount + self.deposit

    def Withdraw(self):
        print("Do you want to withdraw money in your account?")
        press = input("Press 'Y' OR 'N' = ")
        if press != 'Y' and press  != 'N':
            print("Invalid Option") 
            return
        else:
            if press == 'N':
                return
            else:
                try:
                    self.withdraw = int(input("How much money will you withdraw from your bank account? : "))
                except ValueError as Vobj:
                    print("Expected Error : ",Vobj)
                    return
                except Exception as Eobj:
                    print("Expected Error : ",Eobj)
                    return
                if self.withdraw <= 0:
                    print("Invalid Amount")
                    return
                else:
                    if self.withdraw > self.amount:
                        print("Your bank account has insufficient funds.")
                        return
                    else:
                        self.amount = self.amount - self.withdraw

    def CalculateIntrest(self):
        self.intrest = self.amount * BankAccount.ROI * BankAccount.Years
        print("Intrest rate for 5 years based on your current amount is : ",self.intrest)

    def Display(self):
        print("Customer Name : ",self.name)
        print("Bank Balance : ",self.amount)
        print("...Thank You...")

Rushikesh = BankAccount()
Satish = BankAccount()
Avinash = BankAccount()
Akash = BankAccount()
Abhijit = BankAccount()

# Obj1 = BankAccount()
# Obj1.Deposit()
# Obj1.Withdraw()
# Obj1.CalculateIntrest()
# Obj1.Display()

# Obj2 = BankAccount()
# Obj2.Deposit()
# Obj2.Withdraw()
# Obj2.CalculateIntrest()
# Obj2.Display()

# Obj3 = BankAccount()
# Obj3.Deposit()
# Obj3.Withdraw()
# Obj3.CalculateIntrest()
# Obj3.Display()

# Obj4 = BankAccount()
# Obj4.Deposit()
# Obj4.Withdraw()
# Obj4.CalculateIntrest()
# Obj4.Display()

# Obj5 = BankAccount()
# Obj5.Deposit()
# Obj5.Withdraw()
# Obj5.CalculateIntrest()
# Obj5.Display()

    # Output:
    # D:\Marvellous Infosystems\Python Machine Learning with Data Science\Python\Python Assignments\Python Assignment 8>Python Assignment8_2.py

    # *** Welcome to Marvellous Infosystems Bank ***
    # Coustomer Profile
    # Enter Your Name : Rushikesh Sable
    # Enter Your Bank Balance : 17800
    # Do you want to deposite money in your account?
    # Press 'Y' OR 'N' = Y
    # How much money will you deposit in your bank account? : 5600
    # Do you want to withdraw money in your account?
    # Press 'Y' OR 'N' = N
    # Intrest rate for 5 years based on your current amount is :  1228500.0
    # Customer Name :  Rushikesh Sable
    # Bank Balance :  23400
    # ...Thank You...

    # *** Welcome to Marvellous Infosystems Bank ***
    # Coustomer Profile
    # Enter Your Name : Satish Nawale
    # Enter Your Bank Balance : 18000
    # Do you want to deposite money in your account?
    # Press 'Y' OR 'N' = N
    # Do you want to withdraw money in your account?
    # Press 'Y' OR 'N' = Y
    # How much money will you withdraw from your bank account? : 2000
    # Intrest rate for 5 years based on your current amount is :  840000.0
    # Customer Name :  Satish Nawale
    # Bank Balance :  16000
    # ...Thank You...

    # *** Welcome to Marvellous Infosystems Bank ***
    # Coustomer Profile
    # Enter Your Name : Avinash Bhosale
    # Enter Your Bank Balance : 25000
    # Do you want to deposite money in your account?
    # Press 'Y' OR 'N' = N
    # Do you want to withdraw money in your account?
    # Press 'Y' OR 'N' = l
    # Invalid Option
    # Intrest rate for 5 years based on your current amount is :  1312500.0
    # Customer Name :  Avinash Bhosale
    # Bank Balance :  25000
    # ...Thank You...

    # *** Welcome to Marvellous Infosystems Bank ***
    # Coustomer Profile
    # Enter Your Name : Akash Shinde
    # Enter Your Bank Balance : 50000
    # Do you want to deposite money in your account?
    # Press 'Y' OR 'N' = Y
    # How much money will you deposit in your bank account? : 10000
    # Do you want to withdraw money in your account?
    # Press 'Y' OR 'N' = N  
    # Intrest rate for 5 years based on your current amount is :  3150000.0
    # Customer Name :  Akash Shinde
    # Bank Balance :  60000
    # ...Thank You...

    # *** Welcome to Marvellous Infosystems Bank ***
    # Coustomer Profile
    # Enter Your Name : Abhijit Shinde
    # Enter Your Bank Balance : 9000
    # Do you want to deposite money in your account?
    # Press 'Y' OR 'N' = N
    # Do you want to withdraw money in your account?
    # Press 'Y' OR 'N' = Y
    # How much money will you withdraw from your bank account? : 5000
    # Intrest rate for 5 years based on your current amount is :  210000.0
    # Customer Name :  Abhijit Shinde
    # Bank Balance :  4000
    # ...Thank You...