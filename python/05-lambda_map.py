#!/usr/bin/python3
# map allows us to excute a funciton in each item in a list
one_to_10 = range(1, 11)


def double_num(num):
    return num * 2
print(list(map(double_num, one_to_10)))
