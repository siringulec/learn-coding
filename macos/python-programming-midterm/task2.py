import random
number = random.randint(0, 10)  # generate randon number between 0 and 10
print("You have 5 chances to guess correctly.")
guess = int(input("Please enter a number between 0 and 10: "))  # take an input
for x in range(4):  # for loop for the remaining 4 turns
    if guess < number:
        print("Number is too small")
        guess = int(input("Enter a number again: "))
    elif guess > number:
        print("Number is too large")
        guess = int(input("Enter a number again: "))
    else:
        print("Won!")
        break
else:
    print("You lost!")  # if not guessed correctly in the for loop
