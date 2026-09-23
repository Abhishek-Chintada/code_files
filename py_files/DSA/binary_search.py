import numpy as np

elements = np.arange(1, 101, dtype=int)
guess = 23

def binarySearch(start, end, guess):
    if(start >= end):
        return False
    mid = end-start//2
    if guess > elements[(end-start)//2]:
        return binarySearch((start+end)/2, end, guess)
    elif guess < elements[(end-start)//2]:
        return binarySearch(start, (end-start)/2, guess)
    elif guess == elements[(end-start)//2]:
        return True
    return False

if(binarySearch(0, len(elements), guess)):
    print("Found\n")
else:
    print("Not Found\n")