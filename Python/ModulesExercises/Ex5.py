import random


def menu():
    print("*************************")
    print("** A Simple Math Quiz **")
    print("*************************")
    print("1. Addition")
    print("2. Subtraction")
    print("3. Multiplication")
    print("4. Exit")
    print("-------------------------")
    choice = input("Enter your choice: ")
    return choice


def generate_nb(level):
    # level 1 -> 1 digit, level 2 -> 2 digits, level 3 -> 3 digits
    if level == 1:
        number = random.randint(1, 9)
    elif level == 2:
        number = random.randint(10, 99)
    else:
        number = random.randint(100, 999)
    return number


def generate_operation(choice, level):
    nb1 = generate_nb(level)
    nb2 = generate_nb(level)

    if choice == "1":
        sign = "+"
        real_result = nb1 + nb2
    elif choice == "2":
        sign = "-"
        real_result = nb1 - nb2
    else:
        sign = "*"
        real_result = nb1 * nb2

    print("Write your answer")
    answer = int(input(str(nb1) + sign + str(nb2) + " = "))

    if answer == real_result:
        return "Correct"
    else:
        return "Incorrect"


def operation(choice, level):
    if choice == "1" or choice == "2" or choice == "3":
        return generate_operation(choice, level)
    elif choice == "4":
        return "Goodbye"
    else:
        return "Invalid choice"


def main():
    # Ask for the level until it is valid
    print("************************************")
    print("** Choose your level: 1, 2 or 3 **")
    print("************************************")
    level = input("Level: ")
    while level != "1" and level != "2" and level != "3":
        print("Incorrect level, try again")
        level = input("Level: ")
    level = int(level)

    total = 0      # total number of operations done
    correct = 0    # number of correct answers

    choice = ""
    while choice != "4":
        choice = menu()
        result = operation(choice, level)
        print(result)

        if result == "Correct":
            correct = correct + 1
            total = total + 1
        elif result == "Incorrect":
            total = total + 1

    # Score at the end
    if total == 0:
        score = 0
    else:
        score = correct / total * 100

    print("-------------------------")
    print("Your score is  {:.2f}%.".format(score))
    print("-------------------------")


main()
