# Declare 4 lists winter, spring, summer and autumn including each the corresponding season months. 
# Declare then another list called seasons including the 4 previous lists. 
# What would be the result of each instruction below?
# print( seasons[2] )
# print( seasons[1][0] )
# print( seasons[1:2] )
# print( seasons[0][3] )
# Then create a list months and, using the seasons list, initialize it with the first and the last months of the year.

# assume jan till march is winter
winter = ["Jan", "Feb", "March"]
spring = ["Apr", "May", "June"]
summer = ["July", "Aug", "Sept"]
autumn = ["Oct", "Nov", "Dec"]

seasons = [winter, spring, summer, autumn]
print(seasons)

# prints summer list
print(seasons[2])

# prints Apr
print(seasons[1][0])

# prints spring list
print(seasons[1:2])

# error (3 is out of bounds)
print(seasons[0][3])

months = [seasons[0][0], seasons[3],[2]]
print(months)
