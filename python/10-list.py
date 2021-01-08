#!/usr/bin/python3
"""append, insert, extend, index"""
lista = ["Esperanza", "Liliana", "Alicia", "Gerardo", "Eduardo", "Ricardo"]
print("Toda la lista. lista[:] = lista =", lista[:])
print("lista[2:4] =", lista[2:4])
print("lista[2:] =", lista[2:])
print("lista[:2] =", lista[:2])
print("lista[-2:] =", lista[-2:])
print("lista[:-2] =", lista[:-2])
lista.append("append")  # takes only one argument
print("using append =", lista)
lista.insert(2, "insert")  # takes two args
print("using insert at id[2] =", lista)
lista.extend(["Humberto", "Carlos", "Jorge"])
print("using extend at the end =", lista)
print("Gerardo is in the index:", lista.index("Gerardo"))
print("in returns True or False for Liliana in lista", "Liliana" in lista)
python_list = ["string", 2, False, 4.8]
print(python_list)
python_list.remove("string")
print("after .remove string =", python_list)
print("print the last and remove it using\
    pop inside print =", python_list.pop())
print("after using pop = ", python_list)
