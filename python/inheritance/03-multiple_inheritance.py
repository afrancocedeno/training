#!/usr/bin/python3
class Parent_0:
    def function_0(self):
        print('This is a parent function 0')


class Parent_1:
    def function_1(self):
        print('This is a child function 1 from\
            parent 0 and is a parent of the funciton 2')


class Child(Parent_0, Parent_1):
    def function_2(self):
        print('This is the chils function')

# We call parents from the child
obj = Child()
obj.function_0()
obj.function_1()
obj.function_2()
