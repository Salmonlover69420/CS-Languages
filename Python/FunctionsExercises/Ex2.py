def sqrt(nb):
    return nb**(1/2) # or import math and do math.sqrt method in the calc_distance_3D fct
def calc_distance_3D(x1, y1, z1, x2, y2, z2):
    return sqrt(
        (x2 - x1)**2 + (y2 - y1)**2 + (z2 - z1)**2
    )

x1 = int(input("Enter the x coordinate of the first point: "))
y1 = int(input("Enter the y coordinate of the first point: "))
z1 = int(input("Enter the z coordinate of the first point: "))
x2 = int(input("Enter the x coordinate of the second point: "))
y2 = int(input("Enter the y coordinate of the second point: "))
z2 = int(input("Enter the z coordinate of the second point: "))


print(f"The distance between both points is: {calc_distance_3D(x1, y1, z1, x2, y2, z2):.2f}")
