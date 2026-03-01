from classes import Car

car_1 = Car("Toyota", "Corolla", 2020, "Blue")
car_2 = Car("Honda", "Civic", 2019, "Red")

print(car_1.make)
car_1.drive()
car_1.stop()
print(f"{car_1 + car_2} -> Collaboration!")
print(f"{car_1 * car_2} -> Partnership!")
      