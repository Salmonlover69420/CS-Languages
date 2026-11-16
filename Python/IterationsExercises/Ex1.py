week = ["Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"]

# Method 1: Loop over index
print( f"{week[0]}: Back to work!")

for i in range(1, 5):
    print( f"{week[i]}: Working day")

for i in range(5, 7):
    print( f"{week[i]}: Finally, the weekend")

print()

# Method 2: Loop over value
print( f"{week[0]}: Back to work!")

for day in week[1:5]:
    print( f"{day}: Working day")

for day in week[5:]:
    print( f"{day}: Finally, the weekend!")

print()

# Method 3: One singular loop (over value, can also do over index)
for day in week:
    if day == "Monday":
        print( f"{day}: Back to work!")
    elif day in week[1:5]:
        print( f"{day}: Working day")
    else:
        print( f"{day}: Finally, the weekend!")

print()

# Method 4:
for i in week:
    if i == 'Monday':
        print(i, ":Back to Work!")
    elif i == 'Saturday' or i == 'Sunday':
        print(i, ": Finally! The weekend")
    else:
        print(i, ": Working Day")
