def compute_pay(hours, rate):
    if hours < 0:
        return 0
    elif hours <= 40:
        return salary * rate
    else:
        return 40 * rate + (hours - 40) * rate * 1.5

def main():
    hour = int(input("Enter hours: "))
    rate = float(input("Enter rate: "))
    
    print(f"Salary = {compute_pay(hour, rate):.2f}")

main()
