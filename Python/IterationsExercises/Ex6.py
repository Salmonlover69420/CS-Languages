# import random

# steps = 0
# counter = 0

# while True:
#     jump = random.choice([-1, 1])

#     steps += jump

#     counter += 1

#     # print(steps)

#     if steps == 5:
#         break

# print(counter)

# Method 2
import random

position = 0
nbSteps = 0

while position < 5:
    step = random.choice([-1, 1])

    position += step

    nbSteps += 1

print(f"Total number of steps = {nbSteps}")