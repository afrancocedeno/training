#!/usr/bin/python3
'''
    superfunciton call the parent funciton from the child usig super()
'''


class Parent_0:
    def function_0(self):
        print('lala This is function 0')


class Child(Parent_0):
    def function_1(self):
        super().function_0()
        print('lala This is function 1')
ob = Child()
ob.function_0()
ob.function_1()
