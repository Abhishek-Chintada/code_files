import csv

name = input("Enter the name to be appended: ")
number = input("Enter the number to be appended: ")

with open("family_d.csv", "a") as file:
    writer = csv.DictWriter(file, fieldnames=["Name", "Number"])
    writer.writerow({"Name": name, "Number": number})