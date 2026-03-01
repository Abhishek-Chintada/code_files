family = ["Krishna Rao", "Rohini", "Koushik", "Abhishek"]

check = input("Enter a name which you want to check: ")

if check.capitalize() in family:
    print("Found")
else:
    print("Not Found")
