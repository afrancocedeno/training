#!/usr/bin/python3


class Parent:
    def function_0(self):
        print('This is a parent function')


lass Child(Parent):
    def function_1(self):
        print('This is a child function')

obj = Child()
obj.function_1()
obj.function_0()
