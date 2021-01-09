#!/usr/bin/python3
age = int(input("Introduce your age: "))
if age < 18:
    print("acces denied")
elif age > 100:  # for each if on else, otherwise use elif
    print("age error")
else:
    print("you can acces")
