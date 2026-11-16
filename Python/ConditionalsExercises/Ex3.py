# Using if, elif, else:
x = float(input("Enter a score between 0 and 1: "))

if not 0.0 <= x <= 1.0:
    print("Error")
elif x >= 0.9:
    print(f"Score: {x}: A")
elif x >= 0.8:
    print(f"Score: {x}: B")
elif x >= 0.7:
    print(f"Score: {x}: C")
elif x >= 0.6:
    print(f"Score: {x}: D")
else:
    print(f"Score: {x}: F")


# Using Match Cases:
y = float(input("enter a score between 0 and 1: "))
match y:
    case y if not 0.0 <= y <= 1.0:
        print("Error")
    case y if y >= 0.9:
        print(f"Score: {y}: A")
    case y if y >= 0.8:
        print(f"Score: {y}: B")
    case y if y >= 0.7:
        print(f"Score: {y}: C")
    case y if y >= 0.6:
        print(f"Score: {y}: D")
    case _:
        print("F")
