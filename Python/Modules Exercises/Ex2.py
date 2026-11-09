# import time as t

# def main():
#     while nb <= 0:
#         nb = int(input("Enter the number to start: "))
#         if nb <= 0:
#             print("Try again, number must be positive")
    
#     countdown(nb)

# def countdown(nb):
#     for i in range(0, nb + 1):
#         if nb == 0:
#             print("Go!")
#             break # or continue

#         print(nb)
#         nb -= 1
#         t.sleep(1)


# main()

# Method 2:

import time

def main():
    nb = -1
    while nb <= 0:
        nb = int(input("Enter the number to start: "))
        if nb <= 0:
            print("Try again, number must be positive")
    
    countdown(nb)

def countdown(nb):
    for i in range(nb, 0, -1):
        print(i, end='\t', flush=True) # if dont put flush true, it stays in buffer and releases all at once
        time.sleep(1)
    print("Go!")


main()
