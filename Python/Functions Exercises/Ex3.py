# Using if, elif, else:
def compute_grade1(x):
    if not 0.0 <= x <= 1.0:
        return "Error"
    elif x >= 0.9:
        # print(f"Score: {x}: ", end="")
        # return "A"
        return f"Score: {x}: A" # More Concise
    elif x >= 0.8:
        return f"Score: {x}: B"
    elif x >= 0.7:
        return f"Score: {x}: C"
    elif x >= 0.6:
        return f"Score: {x}: D"
    else:
        return f"Score: {x}: F"


# Using Match Cases:
def compute_grade2(y):
    match y:
        case y if not 0.0 <= y <= 1.0:
            return "Error"
        case y if y >= 0.9:
            return f"Score: {y}: A"
        case y if y >= 0.8:
            return f"Score: {y}: B"
        case y if y >= 0.7:
            return f"Score: {y}: C"
        case y if y >= 0.6:
            return f"Score: {y}: D"
        case _:
            return f"Score: {y}: F"

def main():
    x = float(input("Enter a score between 0 and 1: "))

    print(compute_grade1(x))

    print()

    y = float(input("enter a score between 0 and 1: "))

    print(compute_grade2(y))

main()
