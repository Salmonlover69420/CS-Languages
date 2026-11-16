# Print the multiplication table of 9 using one single instruction.

print(list(range(0, 91, 9))) # output: [0, 9, 18, 27, 36, 45, 54, 63, 72, 81, 90]
# Note:
print(*list(range(0, 91, 9)), sep = ', ') # output: 0, 9, 18, 27, 36, 45, 54, 63, 72, 81, 90 
# Note: the * unpacks the list into individual elements