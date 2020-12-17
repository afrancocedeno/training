#!/usr/bin/python3
def get_function_mult_by_num(num):
    def mult_by(value):
        return num * value

    return mult_by

generated_function = get_function_mult_by_num(5)

print("5 * 10 =", generated_function(10))
