import numpy as np
import math
tol = 0.000005
res = 0
def f(x):
    return np.pow(x, 8)-np.pow(math.e, x)
arr = np.linspace(1, 150, 10000)
res_arr = arr[f(arr)>0]
lower_bound = res_arr[0]
upper_bound = res_arr[-1]
print("Lower Bound", lower_bound)
print("Upper Bound", upper_bound)