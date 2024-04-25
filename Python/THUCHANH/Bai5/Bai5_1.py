import numpy as np

n = int(input('n = '))
m = int(input('m = '))

a = np.random.rand(n)
print(a)
print('ndim =', a.ndim)
print('shape =', a.shape)
print('len =', len(a))
print('itemsize =', a.itemsize)
print('dtype =', a.dtype)

b = np.linspace(1, n, 100)
print(b)
print('ndim =', b.ndim)
print('shape =', b.shape)
print('len =', len(b))
print('itemsize =', b.itemsize)
print('dtype =', b.dtype)

c = np.arange(1, 101)*2
print(c)

d = np.ones((100, ), dtype=int)
print(d)

e = np.zeros((100, ), dtype=int)
print(e)

h = np.random.randn(100)
print(h)

k = np.ones((n, m), dtype=int)
print(k)

p = np.eye(n, dtype=int)
print(p)

q = np.diag(a)
print(q)

