hour = int(input("Enter hours: "))
rate = float(input("Enter rate: "))
if hour >= 40:
    salary = 40 * rate + (hour - 40) * rate * 1.5
else:
    salary = hour * rate

print(f"Salary: {salary:.2f}")
