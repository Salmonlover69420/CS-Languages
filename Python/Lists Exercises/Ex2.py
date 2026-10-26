# Declare a list called week including the 7 days of the week.
# a) Using this list and positive indices, print separately the weekdays and the weekend days.
# b) Repeat the previous question using negative indices
# c) Give two several ways to access the first element of the list
# d) Reverse and print the list using one single instruction

week = ['Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday', 'Sunday']

# part a
print(week[:5]) # prints weekdays (monday to friday)
print(week[5:]) # prints weekends (sat to sun)

# part b
print(week[-7:-2]) # or print(week[-7:-2]) # not -2:-7!! prints weekdays # note: print(week[-8:-3: -1]) gives friday, thursday, till monday
print(week[-2:])

# part c
print(week[0]) # or print(week[-7]) # two diff ways to access first element

#part b
## use slices
print(week[6::-1]) # if do 6:0:-1 0 will skip monday, and if put -1 instead of 0, it will take sunday
### or
print(week[-1::-1]) # or do -1:-8:-1
