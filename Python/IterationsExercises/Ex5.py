def main():
    lista = []
    listb = []

    while True:
        data = input("Enter an element for list a (end to stop)")

        if data == 'end':
            break

        lista.append(data)

    while True:
        data = input("Enter an element for list b (end to stop)")

        if data == 'end':
            break

        listb.append(data)

    print(f"{lista} and {listb} have common items? {ListComp(lista, listb)}")


def ListComp(lista, listb):
    for item in lista:
        if item in listb:
                return True
        
    return False

main()

# Can also input list as such and continue:
# def main():
#     List1 = input("Enter the elements of the first list: ").split()
#     List2 = input("Enter the elements of the second list: ").split()

#     if Common(List1, List2):
#         print("The lists have common elements.")
#     else:
#         print("The lists have no common elements.")
