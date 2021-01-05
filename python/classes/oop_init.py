#!/usr/bin/python3
class person():
    def __init__(self, name):
        self.name = name

    def say_hi(self):
        print('Hello, how are you', self.name)
person('Alejandro').say_hi()
