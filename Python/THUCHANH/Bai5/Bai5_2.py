import numpy as np

def inputMatrix(n):
    temp_list = list(map(int, input('Nhập mảng: ').split()))
    return np.array(temp_list)

n = int(input('n = '))

a = inputMatrix(n)
b = inputMatrix(n)

c = a+b
d = a-b 
e = a*b 
f = a/b

print('Tổng:', c)
print('Hiệu:', d)
print('Tích:', e)
print('Thương:', f)

print('Tổng phần tử trong c:', np.sum(c))
print('Max của c:', np.max(c))
print('Min của c:', np.min(c))

g = c[::2]
print(g)
print('Tổng phần tử chỉ số chẵn trong c:', np.sum(g))

dong = int(input('Nhập số dòng: '))
cot = int(input('Nhập số cột: '))

if dong*cot == n:
    c = c.reshape((dong, cot))
    print(c)
else:
    print('Không thể chuyển thành 2D.')







