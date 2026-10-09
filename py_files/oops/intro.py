# oops

class Dog:
    def __init__(self, name, age):
        self.age = age
        self.name = name
    def get_name(self):
        return self.name
    def get_age(self):
        return self.age
    def set_age(self, age):
        self.age = age


d = Dog("Tim", 34)
print(d.get_age())
d.set_age(20)
print(d.get_age())


