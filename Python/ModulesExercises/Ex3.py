import random as r
import sys

if len(sys.argv) < 2:
    sys.exit("Error, too few parameters")

N = int(sys.argv[1])
n = 0

for _ in range(N):

    x = r.uniform(-1, 1)
    y = r.uniform(-1, 1)
    d = (x**2 + y**2)**(1/2)

    if d <= 1:
        n += 1

pi = 4 * (n/N)

print(pi)
