#!/usr/bin/python3
"""
    tuple ()
    list  []
    dict  {}
    """
dictionary = {"Name": "Alejandro", "Age": 25}
print("dictionary                   =", dictionary)
print("dictionary name              :", dictionary["Name"])
dictionary["Academy"] = "Holberton"
print("adding an key value          =", dictionary)
# strange values order
del dictionary["Academy"]
print("key value deleted (academy)  =", dictionary)
list_ = ["Name", "Age", "Academy"]
dict_ = {list_[0]: "Daniel", list_[1]: "35", list_[2]: "America"}
print("hole new tuple               =", dict_)
print("accesing a key in the value  =", dict_["Name"])
dict_["Academy"] = ["América", "6sigma institute"]
print("list inside a dictionary     =", dict_)
dict_["Academy"] = {1: "América", 2: "6sigma institute"}
print("dictionary inside a dict     =", dict_)
print("Daniel´s Academys            =", dict_["Academy"])
print("only dict keys               =", dict_.keys())
print("only dict values             =", dict_.values())
print("dictonary lenght             =", len(dict_))
