x = int(input("Enter a number to test: "))

if x % 7 == 0 and x % 5 == 0:
    print(x, "is divisible by both 7 and 5")
else:
    print(x, "is not divisible by both 7 and 5")
