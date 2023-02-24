from cs50 import get_int

points = get_int("How many points did you lose? ")

if points < 2:
    print("You lost less than me.")
elif points > 2:
    print("You lost more than me.")
else:
    print("You lost the same amount.")