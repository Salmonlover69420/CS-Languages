print ("Hello World!")
name = "Joe Mama" # String Variable
number = 5 # Integer Variable
meters = 1.5 # Floating Point Variable
meters2 = 1.0 # Floating Point Variable
Meters2 = 1.1
print (Meters2) # Py is case sensitive so meters2 and Meters2 are different variables
print (name)
print (number)

word = 'poop'
word2 = "pee" # These two are the same, you can use single or double quotes
paragraph = """i can even go to 
another line""" # Only works for triple quotes
print (word, word2, paragraph) # Prints them side by side except paragraph which goes down a line in the middle of it

'''
Multi-line comment wowwwww
'''

day = "13/"
month = "06/"
year = "2007"

print("My birthday is on", day + month + year) # doing print("My birthday is on", day,month,year) will add spaces and make it appear as My birthday is on 13/ 06/ 2007 so we use +

del name # Deletes the name variable
del number, meters # Deletes the number and meters variables
# print (name) # This will cause an error because name was deleted (Commented out to allow the rest of the code to run)
# print (number) # This will cause an error because number was deleted (Commented out to allow the rest of the code to run)

name = "John Doe"
number = 10
print (type(name)) # Prints the type of var name is
print (type(number)) # Prints the type of var number is
print (name, number) # Prints both variables side by side
print (type(meters2), meters2) # Prints the type and value of meters2

# a=10
# b=10
# c=10
# Or you can do the this:
a=b=c=10 # You make them all have the same number but diff variables

print(a,b,c)

d, e, f = 1, 2, "Joe Mama"
print(d, e, f, sep="\n") # sep="\n" separate each one into a diff line

### Application of variables:
# Getting the area and perimeter of a rectangle:
length = 10
width = 5

area = length*width
perimeter = 2*(length+width)

print("The area of the rectangle is", area)
print ("The perimeter of the rectangle is", perimeter)

# Getting the area and perimeter of a square:
side1 = side2 = 5

perimeter = 4*side1
area = side2*side2

print("Area =", area)
print ("Perimeter =", perimeter)


### List variables
days = ['Monday', 'Tuesday', 
        'Wednesday', 'Thursday', 'Friday'] # List Variable
print (days[0]) # Prints the first item on the list (Monday) which is index 0

### Randomization
# If you want to randomize the day chosen you do this:
import random # Imports the random library that way you can use random shit

random_day = random.choice(days)
print (random_day) # Prints a random day from the list
# Or you can directly do:
print (random.choice(days)) # Prints a random day from the list

input("\n\nPress the enter key to exit") # Just makes you enter to a new line while in terminal

import sys; x = 'poopoo'; sys.stdout.write(x + '\n') # Just to show that you can use ; to put RELATED code on the same line

### Local Var
# A local var is a var inside a function as such:
def sum(x,y): # Function
    sum = x + y
    return sum
print(sum(5, 10)) # x = 5, y = 10 and then you do x + y so 15
### Global Var
# A global var is a var outside a function that can be used in any function and have a global SCOPE
x = 5
y = 10
def sum():
    sum = x + y
    return sum
print(sum())


### Classes
# "Blueprint" for creating objects which are instances of a class (under class)
# Example:
class Dog: # Class is Dog
    def bark(self): # Bark is a method for the object (we use self to say that bark is for the object that uses it) 
        print("Woof") # What bark does to the object (self)
# Now you can make objects (like actual dogs here) from the class:
my_dog = Dog() # Creates the object which is my_dog
my_dog.bark() # Calls the bark which prints out woof

# Example 2:
class Math:
    def fail(self):
        print("Haha fail")

    def passed(self):
        print("Wow I passed what a miracle")

me = Math()
me.fail()
me.passed()

### Types of Variable
# Public Variables can be accessed from both inside and outside the class 
# Protected Vars can be accessed from inside the class and its subclasses. Defined by adding one underscore _ before the var name by convention
# Private Vars can only be accessed by the class the var is defined in. Defined by adding double underscores __ before the var name by convention
# Example:
class AClass:
    def __init__(self): # __init___ is a special method known as a constructor which runs automatically when you create an object to initialize the object's data
        self.__private_var = "I am private" # self.__private_var are attributes (vars attached to the obj) that is private

    def show_private(self):
        return self.__private_var

obj = AClass()
# print(obj.__private_var)   # ✗ AttributeError which is what we want to make it safer (can only access the variable through the class as shown in the line below)
print(obj.show_private())    # ✓ Access through method

# Actually, private vars can be accessed through the name mangling technique; When you make a priv var using __ python changes it to _ClassName__var internally so you can also do:
print(obj._AClass__private_var)  # ✓ Access using name mangling. Notice one underscore before the class name and one underscore before "var"

### Methods
# Private Methods are also prefixed with __ and you cannot call it directly from outside the class BUT unlike priv variables it is used internally by the class for helper tasks
# Example:
class MyClass:
    def __init__(self):
        self.__private_var = "I am Private"

    def __private_method(self):
        return "This is a private method"

    def show_private(self):
        return self.__private_var + " and " + self.__private_method() # Notice how we use the method instead of typing in "This is a private method in the first print below"

obj = MyClass()
print(obj.show_private())    # ✓ Access through method (Prints "I am Private and This is a private method")
# print(obj.__private_method())  # ✗ AttributeError
print(obj._MyClass__private_method())  # ✓ Access using name mangling (Prints "This is a private method" only)

# Real life application like securing bank
class BankAccount:
    def __init__(self, account_number, balance):
        self.__account_number = account_number   # Private
        self.__balance = balance                 # Private

    def deposit(self, amount):
        if amount > 0:
            self.__balance += amount
        return self.__balance

    def withdraw(self, amount):
        if 0 < amount <= self.__balance:
            self.__balance -= amount
        return self.__balance

    def get_balance(self):
        return self.__balance
