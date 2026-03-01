import numpy as np
import pandas as pd
data = np.random.rand(10, 5)
data = pd.DataFrame(data, columns = ['1', '2', '3', '4', '5'])
data.to_csv('data1.csv', index = False)
data_csv = pd.read_csv('data1.csv')
print(data_csv)