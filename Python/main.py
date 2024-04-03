import matplotlib.pyplot as pp 
import numpy as np

months = np.array([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12])
incomes = np.array([15.6, 14.2, 25.4, 33.2, 17.1, 44.3, 38.7, 22.0, 25.6, 30.2, 31.2, 35.9])

pp.bar(months, incomes)
pp.show()
