import random


def menu():
    print("************************")
    print("** A Simple Math Quiz **")
    print("************************")
    print("1. Addition")
    print("2. Subtraction")
    print("3. Multiplication")
    print("4. Exit")
    print("------------------------")

    choice = int(input("Enter your choice: "))
    return choice


def generate_nb(level):
    if level == 1:
        return random.randint(0, 9)
    elif level == 2:
        return random.randint(10, 99)
    else:
        return random.randint(100, 999)


def generate_operation(choice, level):
    print("Write your answer")
    nb1 = generate_nb(level)
    nb2 = generate_nb(level)

    if choice == 1:
        op = nb1 + nb2
        answer = int(input(f"{nb1}+{nb2} = "))
    elif choice == 2:
        op = nb1 - nb2
        answer = int(input(f"{nb1}-{nb2} = "))
    else:
        op = nb1 * nb2
        answer = int(input(f"{nb1}*{nb2} = "))

    return "Correct" if op == answer else "Incorrect"


def operation(choice, level):
    if choice in (1, 2, 3):
        return generate_operation(choice, level)
    elif choice == 4:
        return "Goodbye"
    return "Invalid choice"


def main():
    score = 0
    choices = 0
    print("**********************************")
    print("** Choose your level: 1, 2 or 3 **")
    print("**********************************")

    level = 0
    while level not in (1, 2, 3):
        level = int(input("Level: "))
        if level not in (1, 2, 3):
            print("Invalid! Enter a valid level.")

    while True:
        choice = menu()
        result = operation(choice, level)
        print(result)
        if choice == 4:
            break
        if result in ("Correct", "Incorrect"):
            choices += 1
            if result == "Correct":
                score += 1

    percentage = (100 * score / choices) if choices > 0 else 0.0
    print("---------------------------")
    print(f"Your score is  {percentage:.2f}%.")
    print("---------------------------")


main()
