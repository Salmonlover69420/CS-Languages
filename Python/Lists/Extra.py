nb = [1, 2, 3, 6, 7, 23, 7, 23, 8] # 8 elements
x = int(input("Enter a number: "))
freq = nb.count(x) 
# note: count() has a return value (fct not method) so you can print directly instead of initializing a var like freq
print( f"The number {x} is repeated {freq} times in the list {nb}")