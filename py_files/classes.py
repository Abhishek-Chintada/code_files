class Car:

    def __init__(self, make, model, year, color):
        self.make = make
        self.model = model
        self.year = year
        self.color = color

    def drive(self):
        print("The car is driving!")

    def stop(self):
        print("The car is stopped!")

    def __add__(self, other):
        return f"{self.make} + {other.make}" # collaboration!
    def __mul__(self, other):
        return f"{self.make} * {other.make}" # partnership!