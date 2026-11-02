def main():
    a = int(input("Enter the value of a (must be a positive even number): "))
    while a < 0 or a%2: # a%2 is same as a%2 != 0
        print("a must be positive and even")
        a = int(input("Enter the value of a (must be a positive even number): "))

    b = int(input("Enter the value of b (must be a positive even number): "))
    while b <= a or b%2: # b%2 is same as b%2 != 0
        print("b must be > a and even")
        b = int(input("Enter the value of b (must be a positive even number): "))

    nbEven = list(range(a, b + 1, 2))

    for i in range(len(nbEven) - 1):
        print(nbEven[i] * nbEven[i + 1], end='\t') # \t is tab
main()
