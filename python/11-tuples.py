#!/usr/bin/python3
tuples = ("item0", 1, 1, 1)
print("main tuple                   =", tuples)
print("tuple index [1]              =", tuples[1])
new_list = list(tuples)
print("casted as a list             =", new_list)
print("new_list casted as tuple     =", tuple(new_list))
print("item0" in tuples)
print("counts item in the tuple (1) =", tuples.count(1))
print("tuple length                 :", len(tuples))
unitary_tuple = ("uniq item",)  # must include the comma
print("only one element tuple       =", unitary_tuple)
unpacking_tuple = (8, 1, 2021)
day, month, year = unpacking_tuple
print("unpacking tuple by day       =", day)
print("unpacking tuple by month     =", month)
print("unpacking tuple by year      =", year)
