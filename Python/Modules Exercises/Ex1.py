# My method
# import math as m

# print(m.e)
# eApproximated = m.sqrt(5+m.sqrt(4+m.sqrt(3)))

# delta = round(abs(m.e - eApproximated), ndigits=3)

# print(delta)
# if delta == 0.001:
#     print("Correct approximation")

# # Similar for pi

# Method 2 (Dr's):
import math
estE = math.sqrt(5+math.sqrt(4+math.sqrt(3)))
precE = abs(math.e - estE)
print(f"Estimation of e = {estE:.5f}")
print(f"Precision = {precE}")

# PI
estPi = math.sqrt(7 +math.sqrt(6 + math.sqrt(5)))
precPi = abs(math.pi - estPi)
print(f"Estimation of e = {estPi:.5f}")
print(f"Precision = {precPi}")