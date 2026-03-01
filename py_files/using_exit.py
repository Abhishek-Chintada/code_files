import sys

if len(sys.argv) < 2:
    print("Missing command line argument!")
    sys.exit(1)
else:
    name = sys.argv[1]
    print(f"Hello, {name}!")
    sys.exit(0)

# we can use the code of "echo $?" to find the exit status of the code.
