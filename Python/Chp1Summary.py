# NOT FINISHED

print("Hello World!")
name = input("Enter name")


print("Hello")
print(name)

print("Hello" + name) # concatenation (forms a string)
print("Hello", name) 
print("hello," , end="" )
print( f"hello, {name}")

# strip() Removes whitespace fromthe beginning and the end of the string
# capitalize() Replaces the first letter of the stringwith a capital letter
# title() Replaces the first letter of each word in the string with a capital letter
# split() Splits the string according to a delimiter given as argument

name = name.strip().title() 
print( f"hello,{name}")

name2 = input("What's your name?" ).strip().title()
print(f"hello,{name2}")

x= input("What's x?" ) # Input 1
y= input("What's y?" ) # Input 2
z = x + y # Concatenates x & y so z = 12
print(z) # Prints 12
# input() is always a string so you need to convert it into int

x= int(input("What's x?")) # Input 1
y= int(input("What's y?")) # Input 2
z = x + y # z = 3
print(z) # prints 3

# can also do x = float(input("Enter x: "))

a = float(input("What's a?"))
b = float(input("What's b?"))
c = round(a / b , 2) # round(number, DecimalPlaces)
print(c)