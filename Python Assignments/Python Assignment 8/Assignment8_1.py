#   1. Write a program which contains one class named as BookStore.
#      BookStore class contains two instance variables as Name, Author.
#      That class contains one class variable as NoOfBooks which is initialise to 0.
#      There is one instance methods of class as Display which displays Name, Author
#      and number of books.
#      Initialise instance variable in init method by accepting the values from user
#      as name and author.
#      Inside init method increment value of NoOfBooks by one.

#      After creating the class create the two objects of BookStore class as
#      Obj1 = BookStore("Linux System Programming", "Robert Love")
#      Obj1.Display()       # Linux System Programming by Robert Love. No of books : 1

#      Obj2 = BookStore("C Programming", "Dennis Ritchie")
#      Obj2.Display()       # C Programming by Dennis Ritchie. No of books : 2

class BookStore:
    NoOfBooks = 0

    def __init__(self):
        self.Name = 0
        self.Author = 0
        print()

        self.Name = input("Enter Book Name : ")
        self.Author = input("Enter Author Name : ")
        
        BookStore.NoOfBooks = BookStore.NoOfBooks + 1

    def Display(self):
        print("{0} by {1}. No of books {2}".format(self.Name, self.Author, BookStore.NoOfBooks))

Obj1 = BookStore()
Obj1.Display()

Obj2 = BookStore()
Obj2.Display()

    # Output:
    # D:\Marvellous Infosystems\Python Machine Learning with Data Science\Python\Python Assignments\Python Assignment 8>Python Assignment8_1.py  

    # Enter Book Name : Linux System Programming
    # Enter Author Name : Robert Love
    # Linux System Programming by Robert Love. No of books 1

    # Enter Book Name : C Programming  
    # Enter Author Name : Dennis Ritchie
    # C Programming by Dennis Ritchie. No of books 2