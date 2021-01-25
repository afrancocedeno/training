#!/uisr/bin/python3
print("Topics")
print("")
topic = input('type your desired topic: ')
tuple_topics = ("Technology", "Marketing")

if topic in tuple_topics:
	print("Asignatura:" + topic)
else:
	print("error")
