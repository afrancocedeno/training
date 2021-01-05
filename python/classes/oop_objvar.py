#!/usr/bin/python3
class robot:
    """represents a robot, with a name."""
    population = 0

    def __init__(self, name):
        """initializes the data."""
        self.name = name
        print("(initializing {})".format(self.name))
        # when this person is created, the robot
        # adds to te population
        robot.population += 1

    def die(self):
        """I am dying"""
        print("{} is being destroyed!".format(self.name))
        robot.population -= 1
        if robot.population == 0:
            print("{} was the last one.".format(self.name))
        else:
            print("there are still {:d} robots working".format(
                robot.population))

    def say_hi(self):
        """greeting by the robot
        yeah they can do that"""
        print("greetings, my masters call me {}.".format(self.name))

    @classmethod
    def how_many(cls):
        """print the current population."""
        print("We have {:d} robots.".format(cls.population))

droid1 = robot("R2-D2")
droid1.say_hi()
droid1.how_many()

droid2 = robot("C-3P0")
droid2.say_hi()
droid2.how_many()

print("\nRobots can do some work here.\n")

print("Robots have finished their work. So lets destroy them.")
droid1.die()
droid2.die()

robot.how_many()
