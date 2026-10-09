# oops

class Person:
    number_of_people = 0  # class attribute

    def __init__(self, name):
        self.name = name
        Person.number_of_people += 1

p1 = Person("tim")
print(p1.number_of_people)
p2 = Person("jill")
print(p2.number_of_people)
print(p1.number_of_people)

print(f"this is for person : {Person.number_of_people}")
