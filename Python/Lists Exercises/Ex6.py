# Write a program that declares a list and then asks the user to provide the indices of 3 elements to remove from the list. 
# The provided indices must be checked for out of range errors. 
# The final list is displayed on the screen.
def main(): 
    nb = [1, -2, 3, 6, 7, 23, 7, 23, 8] # 8 elements

    index1 = int(input("enter the first index you wish to remove: "))
    index2 = int(input("enter the 2nd index you wish to remove: "))
    index3 = int(input("enter the 3rd index you wish to remove: "))

    if not 0 <= index1 < len(nb):
        print("Error: Index1 out of range")
        return
    if not 0 <= index2 < len(nb):
        print("Error: Index2 out of range")
        return
    if not 0 <= index3 < len(nb):
        print("Error: Index3 out of range")
        return

    SortedIndeces = [index1, index2, index3]
    SortedIndeces.sort()
    SortedIndeces.reverse()
    # print(SortedIndeces) # outputs SortedIndeces in decreasing order

    nb.pop(SortedIndeces[0])
    nb.pop(SortedIndeces[1])
    nb.pop(SortedIndeces[2])

    print(nb)

main()