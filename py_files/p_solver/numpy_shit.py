import numpy as np
import matplotlib.pyplot as plt

# numpy is a system of dealing with arrays!

a1 = np.array([3, 5, 6, 1])
print(a1)
a2 = np.zeros(10)
print(a2)
a3 = np.ones(10)
print(a3)
a4 = np.random.random(10) # creates an array of numbers which are uniformly ramdom from 0 to 1.
print(a4)
a5 = np.random.randn(10) # here the n means the normal distribution.
print(a5)
# note that normal distribution is the same as the gaussian distribution.
# the mean of the normal distribution is 0 and the standard deviation is 1.
a6 = np.linspace(0, 10, 15) # note that the final index is also included!
print(a6)
# linspace is mostly used for plottign shit.
a7 = np.arange(0, 10, 2) # here we define the spacing instead of the number of wlwments.
# also note that we do not get to add the final index value to the array when using the arange.
print(a7)

# Why use NUmpy?
print(2*a1) # the element wise operations are done without any for loops!
print(a1>4) # the element wise comparison is also done without any for loops!
x = np.linspace(0, 10, 100)
plt.plot(x, x**2)
plt.title("Lavada")
#plt.show() # chinna pillala panchayathi.
plt.hist(a4)
#plt.show()

def f(x):
    return x**2 * np.sin(x)/np.exp(-x)
    
plt.plot(x, f(x))
plt.title("Function Plot.")
#plt.show()

# indexing and slicing.

a1 = np.array([2, 4, 6, 8, 10])
print(a1[2])
print(a1[:-1])
print(a1[1:4])
print(a1[a1>3])
# numpy can also deal with strings!
names = np.array(["Jim", "Luke", "Josh", "Bob"])
first_letter_j = np.vectorize(lambda s: s[0])(names) == 'J' # np.vectorize is like a for loop used to apply a function to each element of an array.
print(names[first_letter_j]) # np.vectorize also returns an array btw.
