import math as m
import random as r
import time as t

LowerBound = 0

N = int(input("Enter an upper positive bound: "))
while N <= 0:
  N = int(input("Enter an upper positive bound: "))

MinNbTrials = m.ceil(m.log2(N - LowerBound + 1))
n = r.randint(LowerBound, N)

StartTime = t.time()
x = int(input("Choose a number: "))
NbTrials = 1

while x != n:
  if x > n:
    print("Try again, too large!")
  else:
    print("Try again, too small!")
  x = int(input("Choose a number: "))
  NbTrials += 1

EndTime = t.time()
TimeTaken = EndTime - StartTime

print("Congratulations, you won!")
print(
    f"It took you {NbTrials} rounds and {TimeTaken:.2f} seconds to guess the"
    " number"
)
print(f"Minimum number of trials to guess the nb = {MinNbTrials}")

match NbTrials:
  case _ if NbTrials <= MinNbTrials:
    print("Score: Excellent!")
  case _ if NbTrials <= MinNbTrials + 3:
    print("Score: Very good!")
  case _ if NbTrials <= MinNbTrials + 5:
    print("Score: Good!")
  case _ if NbTrials <= MinNbTrials + 7:
    print("Score: Not bad!")
  case _:
    print("You should try harder next time!")
    