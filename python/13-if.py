#!/usr/bin/python3
"""every single input is considered as text and you can display the message"""
student_grade = int(input("enter student grade: "))


def evaluation(grade):
    result = "approved"
    if grade < 3:
        result = "failure"
    return (result)

print(evaluation(student_grade))
