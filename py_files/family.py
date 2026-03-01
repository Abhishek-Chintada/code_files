import csv

file = open("family.csv", "a")

name = input("Enter the name: ")
number = input("Enter the number: ")

writer = csv.writer(file)
writer.writerow([name, number])

file.close()