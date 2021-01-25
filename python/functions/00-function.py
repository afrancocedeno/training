#!/usr/bin/python3
users_lists = ['afrancocedeno']
def welcome_function():
    print('welcome! type your username: ')
def user_checker(user_name):
    if user_name in users_lists:
        print(user_name + ' is a VALID username')
    else:
        print('error username')
welcome_function()
user_name = input()
user_checker(user_name)
