import time
import numpy as np
n = 10000000
arr = [0]*n
i=0
t0 = time.time()
while i<=n-1:
    arr[i] = i+1
t1 = time.time()
t = t1 - t0
print(t)