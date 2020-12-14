#!/usr/bin/python3
num1, num2 = input('Type two numbers to operate: ').split()

num1 = int(num1)
num2 = int(num2)

addition = num1 + num2
difference = num1 - num2
product = num1 * num2
quotient = num1 / num2
reminder = num1 % num2

print("difference: {} - {} = {}".format(num1, num2, difference))
print("addition: {} + {} = {}".format(num1, num2, addition))
print("product: {} * {} = {}".format(num1, num2, product))
print("quotient: {} / {} = {}".format(num1, num2, quotient))
print("reminder: {} % {} = {}".format(num1, num2, reminder))

