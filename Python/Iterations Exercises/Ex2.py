# Method 1: (Fix needed)
def main():
    nb = []
    print("Enter a number, 'end' to stop: ")

    while True:
        data = input("> ")
        if data == 'end':
            break
        nb.append(int(data))

    if len(nb) > 0:
        print( f"The smallest value in {nb} is {minimum(nb)}")
    else:
        print("The list is empty")


def minimum(nb):
    res = nb[0]
    for el in nb[1:]:
        if el < res:
            res = el
    return res

main()

# Method 2: (slightly different main)
# def main():
#     TheList = []
#     size = int(input("Enter the size of the list: "))
#     for i in range(size):
#         x = int(input( f"Enter element #{i+1}: "))
#         TheList.append(x)

#     print( f"The smallest value in {TheList} is {minimum(TheList)}") 

# def minimum(TheList):
#     res = TheList[0]
#     for el in TheList[1:]:
#         if el < res:
#             res = el
#     return res

# main()
