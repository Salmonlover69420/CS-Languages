Hours = float(input("Enter the hours worked: "))
RatePerHour = float(input("Enter the rate per hour: "))

if Hours <= 40: 
    Salary = Hours * RatePerHour
else:
    Salary = 40 * RatePerHour + (Hours - 40) * 1.5 * RatePerHour

print( f"Salary = {Salary:.2f}")
