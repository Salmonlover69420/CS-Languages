# using if
# x = float(input("enter a score between 0 and 1: "))
# if not 0.0 <= x <= 1.0:
#     print("Error")
# elif x >= 0.9:
#     print( f"Score: {x}: A")
# elif x >= 0.8:
#     print(f"Score: {x}: B")
# elif x >= 0.7:
#     print(f"Score: {x}: C")
# elif x >= 0.6:
#     print(f"Score: {x}: D")
# else:
#     print("F")


# using match case
x = float(input("enter a score between 0 and 1: "))
match x:
    case x if not 0.0 <= x <= 1.0:
        print("Error")
    case x if x >= 0.9:
        print( f"Score: {x}: A")
    case x if x >= 0.8:
        print(f"Score: {x}: B")
    case x if x >= 0.7:
        print(f"Score: {x}: C")
    case x if x >= 0.6:
        print(f"Score: {x}: D")
    case _:
        print("F")
