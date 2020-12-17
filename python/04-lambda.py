#!/usr/bin/python3
# lambda arg1, arg2, ..... : expression that uses arguments


def sum(x, y): return x + y
print("sum: ", sum(4, 5))


def can_vote(age): return True if age >= 18 else False
print("can vote: ", can_vote(19))
power_list = [lambda x: x ** 2,
              lambda x: x ** 3,
              lambda x: x ** 4]
for func in power_list:
    print(func(4))
