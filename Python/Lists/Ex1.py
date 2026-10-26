# Exercise 1
# Consider the following instructions:

# myList = list( range( 10 , 15 ) )
# var = 0
# var2 = 10

# What is the result of each instruction below? Verify your answers using the interactive mode.
# a) print( myList[2] )
# b) print( myList[var] )
# c) print( myList[var2] )
# d) print( myList['var'] )

# myList = list(range(10, 15))
# var = 0
# var2 = 10

# part a
print(myList[2]) # output: 12
# part b
print(myList[var]) # output: 10
# part c
print(myList[var2]) # output: error (out of range)
#part d
print(myList['var']) # output: error (type error, must be ints or slices, not str)
