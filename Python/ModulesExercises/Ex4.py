import random as r
import math as m
import time as t


def main():
    LowerBound = 0

    N = -1
    while N <= 0:
        N = int(input("Enter an upper positive bound: "))
        if N <= 0:
            print("Upper bound must be positive")

    n = r.randint(LowerBound, N)

    StartTime = t.time()
    rounds = 0
    MinNbTrials = round(m.log2(N - LowerBound + 1))

    a = -1
    while a != n:
        a = int(input("Choose a number: "))
        rounds += 1

        if a < n:
            print("Try again, too small!")
        elif a > n:
            print("Try again, too large!")
        else:
            print("Congratulations, you won!")

    FinalTime = t.time()
    Time = round(FinalTime - StartTime, 2)

    print(f"It took you {rounds} rounds and {Time} seconds to guess the number")
    print(f"Minimum number of trials to guess the nb = {MinNbTrials}")

    if rounds <= MinNbTrials:
        print("Score: Excellent!")
    elif rounds <= MinNbTrials + 3:
        print("Score: Very good")
    elif rounds <= MinNbTrials + 5:
        print("Score: Good")
    elif rounds <= MinNbTrials + 7:
        print("Score: Not bad")
    else:
        print("You should try harder next time!")


main()
