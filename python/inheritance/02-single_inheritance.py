#!/usr/bin/python3
class Parent:
    def function_0(self):
        print('This is a parent function 0')


class Child(Parent):
    def function_1(self):
        print('This is a child function 1')

obj = Child()
obj.function_0()
