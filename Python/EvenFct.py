def is_even(x):
    return x%2 == 0 # returns boolean (true or false)
    
def is_even2(x):
    return True if x%2 == 0 else False # python specific way, same result

x = int(input("Input number: "))
print(f"{x} is even? {is_even(x)}")
print(f"{x} is even? {is_even2(x)}")
