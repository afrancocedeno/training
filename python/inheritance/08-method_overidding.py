#!/usr/bin/python3
"""
parent function is replaced by child function
method overrided (define the same funciton
on the chils on singles inheritance
"""


class Parent:
    def function_0(self):
        """
        docstring
        """
        print('this is zero')


class Child(Parent):
    """
    docstring
    """
    def function_0(self):
        """
        docstring
        """
        print('this is one overrided')

ob = Child()
ob.function_0()
