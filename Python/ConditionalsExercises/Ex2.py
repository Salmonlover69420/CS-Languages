print("---{{Menu}}--")
print("Enter 1 or 2: ")

Choice = int(input("1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n"))

if Choice < 1 or Choice > 2:
    Choice = int(input("1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n"))

match Choice:
    case 1:
        TempC = float(input("Enter the temperature in Celsius: "))
        TempF = (9/5)*TempC + 32
        print(TempF)
    case 2:
        TempF = float(input("Enter the temperature in Fahrenheit: "))
        TempC = 5 * (TempF - 32)/9
        print(TempC)
    case _:
        print("Error")