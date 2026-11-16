def main():
    # ListNb = [1, 6, 2, 13, 0, 5, 23, 34, 56]
    ### or user input:
    ListNb = []

    print("Enter a positive integer number, -1 to stop")

    while True:
        data = int(input("> "))
        if data == -1:
            break
        if data <= 0:
            continue

        ListNb.append(data)
    ###

    for nb in ListNb:
        print(f"{nb} is prime? {IsPrime(nb)}")
    # or

    for nb in ListNb:
        if IsPrime(nb):
            print(f"{nb} is prime")
        else:
            print(f"{nb} is not prime")


def IsPrime(nb):
    if nb == 1:
        return False
    if nb == 2:
        return True
    for i in range(2, nb):
        if nb % i == 0:
            return False
    return True


main()
