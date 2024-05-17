import numpy as np
import matplotlib.pyplot as pl 

x = np.linspace(1, 100, 10000)
y = np.exp(np.random.randn(10000))

pl.scatter(x, y, y, y*-120)
pl.show()