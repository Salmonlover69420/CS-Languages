# "Fizzbuzz" problem (asked in interviews)

UpperLimit = int(input("Enter the upper limit: "))
while UpperLimit <= 0:
    print("Upper limit must be positive!")
    UpperLimit = int(input("Enter the upper limit: ")) 

    for i in range(UpperLimit + 1):
        if i % 3 == 0 and i % 5 == 0: # or if not i%3 and not i%5:
            print("Multiple of 3 and 5")
        elif i % 3 == 0: # or elif not i%3:
            print("Multiple of 3")
        elif i % 5 == 0: # or elif not i%5:
            print("Multiple of 5")
        else:
            print(i)
