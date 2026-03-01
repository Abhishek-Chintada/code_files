# Author : Abhishek Chintada, 21/12/25, 6:21pm
# The following code uses C implementation of the Euler's method to solve the differential equation dp/dt = 0.7p(1-(p/750))-20 (sample equation) which represents population of a species. 
# The bulk of the calculations are designed to be done in the C file to increase the speed of execution.

import ctypes   # to import the C shared library
import numpy as np
import time # This module is used to measure execution time of the code (emphasis on the fact that python is slow and the reason to use C).
import matplotlib.pyplot as plt  # The results are finally plotted to emphasie the fact that smaller step size gives better results. 
population_i = 30  # Setting some intial population
time_i = 0
time_e = 60.  # time in days
dt1 = 1 # we are considering different step sizes for checking the results.
dt2 = 0.5
dt3 = 0.25
intervals1 = int(round((time_e - time_i)/dt1))
intervals2 = int(round((time_e - time_i)/dt2))
intervals3 = int(round((time_e - time_i)/dt3))

# We will be using the numpy arrays as C refers to arrays as contiguous and general python array's elements are scattered in memory.

t_arr1 = np.zeros(intervals1+1)   # the number of elements in the array are one more than the number of intervals. 
p_arr1 = np.zeros(intervals1+1)
t_arr2 = np.zeros(intervals2+1)
p_arr2 = np.zeros(intervals2+1)
t_arr3 = np.zeros(intervals3+1)
p_arr3 = np.zeros(intervals3+1)

# Initializing the first elements of the arrays.

t_arr1[0] = time_i
p_arr1[0] = population_i
t_arr2[0] = time_i
p_arr2[0] = population_i
t_arr3[0] = time_i
p_arr3[0] = population_i

# Loading the shared C library.
euler_lib = ctypes.CDLL('/Users/abhishekchintada/Desktop/VSCode_Files/libeuler.so')

# Defining the array's argument data type for the C function.(basically a pointer data type!)
arr_ty_float64 = np.ctypeslib.ndpointer(dtype = np.float64, flags = 'C_CONTIGUOUS')

# Making sure that the C function receives the argumments in the correct format.
euler_lib.euler_method_calculation.argtypes = [arr_ty_float64, arr_ty_float64, ctypes.c_double, ctypes.c_int]

# Calling the C function to perform the calculations. Note that the C function directly modifies the numpy arrays.
euler_lib.euler_method_calculation(t_arr1, p_arr1, dt1, intervals1+1)
euler_lib.euler_method_calculation(t_arr2, p_arr2, dt2, intervals2+1)
euler_lib.euler_method_calculation(t_arr3, p_arr3, dt3, intervals3+1)


# Plotting the graph to visulaise the results.

time_stamps = [0, 5, 10, 15, 20, 25]
p_stamps = [0, 100, 200, 300, 400, 500, 600, 700, 800]
plt.xlabel('Time (in days)', fontsize=15)
plt.ylabel('Population P(t)', fontsize=15)
plt.xticks(time_stamps, fontsize=10)
plt.yticks(p_stamps, fontsize=10)
plt.grid(True)
plt.plot(t_arr1, p_arr1, label='dt=1', linewidth=2)
plt.plot(t_arr2, p_arr2, label='dt=0.5', linewidth=2)
plt.plot(t_arr3, p_arr3, label='dt=0.25', linewidth=2)
plt.title('Population vs Time using Euler\'s Method', fontsize=20)
plt.xlim(0, 25)
plt.ylim(0, 800)
plt.legend()
plt.show()

# Here we measure the execution time for 1 million iterations to compare with pure Python implementation.

iterations = 1000000
start_time = time.time()
for i in range(iterations):
    euler_lib.euler_method_calculation(t_arr1, p_arr1, dt1, intervals1+1)
end_time = time.time()
print("Execution time for 1 million iterations in Euler_caller.py: ", end_time - start_time, "seconds")

