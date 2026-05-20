import numpy as np
import matplotlib.pyplot as plt

def sigmoid(x):
    return 1/(1 + np.exp(-x))
    
x = np.linspace(-10, 10, 1000)
y = sigmoid(x)
plt.style.use('seaborn-v0_8-whitegrid')
plt.figure(figsize = (8, 5))
plt.plot(x, y, linewidth = 2, color = 'red')
plt.axhline(1, color = 'blue', linestyle = '--', alpha = 0.5)
plt.axhline(0, color = 'blue', linestyle = '--', alpha = 0.5)
plt.axvline(0, color = 'black', linewidth = 0.8, alpha = 0.8)
plt.title('Sigmoid Function!', fontsize = 14, pad = 15, fontweight = 'bold')
plt.xlabel("X", fontsize = 12, fontweight = 'bold')
plt.ylabel("Y", fontsize = 12, fontweight = 'bold')
plt.xticks(np.arange(-10, 11, 2))
plt.yticks([-0.5, 0, 0.5, 1, 1.5])
plt.tight_layout()
plt.show()