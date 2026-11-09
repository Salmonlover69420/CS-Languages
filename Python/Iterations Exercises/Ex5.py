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
