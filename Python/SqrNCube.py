def square(nb):
    return nb*nb # or just do nb**2 (nb power 2)
def cube(nb):
    return square(nb)*nb
def square_cube(nb):
    return nb**2, nb**3
def square_cube2(nb):
    return [nb**2, nb**3]
    
x = int(input("enter a number: "))

print("The square is: ", square(x))
print("The cube is: ", cube(x), "\n")

res1, res2 = square_cube(x)
print(f"Square: {res1}\nCube: {res2}")

print(f"Return value = {square_cube2(x)}") # to do {square_cube2(x)} instead of separately printing the two results, you put them in a list in the fct using []
