def calculation(x, y, operation):
    match operation:
        case "+":
            return x + y
        case "-":
            return x - y
        case "/":
            if y != 0:
                return x / y
            else:
                print("Cannot divide by 0")
                return None
        case "*":
            return x * y
        case "**":
            return x ** y
        case "%":
            if y != 0:
                return x % y
            else:
                print("Cannot divide by 0")
                return None
        case _:
            print("Invalid operator")
            return None # like null
    
def main():
    x = float(input("Choose the first number: "))
    y = float(input("Choose the second number: "))

    operation = input("Choose between +, -, /, *, %, and **: ")

    res = calculation(x, y, operation)

    if res != None:
        print(f"{x}{operation}{y} = {res:.2f}")

main()