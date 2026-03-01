import csv

with open("family.csv", "a") as file:
    name = input("Enter the name to be appended: ")
    number = input("Enter the number to be appended: ")

    writer = csv.writer(file)
    writer.writerow([name, number])
