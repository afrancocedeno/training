#!/usr/bin/python3
'''
    hierarchycal inheritance child have the same parent class
'''


class Parent_0:
    def function_0(self):
        print('This is a parent function 0')


class Parent_1(Parent_0):
    def function_1(self):
        print('This is a parent function 1')


class Child(Parent_0):
    def function_2(self):
        print('This is the chils function')

# We call parents from the child
obj = Child()
obj1 = Parent_1()
obj.function_0()
obj1.function_0()
