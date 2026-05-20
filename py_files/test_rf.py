import numpy as np
# we are going to implement the fixed point iteration method here.

def fixed_point_iteration(g, x0): # g is the function of x = g(x) and x0 is the intial guess.
    max_iterations = 10000
    tolerance = 1e-12
    for i in range(max_iterations):
        x = g(x0)
        step = np.abs(x - x0)
        print("The step error is : ", step, "\n")
        if step < tolerance:
            return x
        x0 = x
        
def g(x):
    return x**2 - 2*x + 2
x0 = 1.2
result = fixed_point_iteration(g, x0)
print("The result is : ", result)