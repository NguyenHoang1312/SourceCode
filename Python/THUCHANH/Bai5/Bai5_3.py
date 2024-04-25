import numpy as np 

def Input(n):
    output = np.zeros(n)
    for i in range(n):
        output[i] = float(input(f'Mảng[{i}] = '))
    return output 

def convert_to_matrix(matrix, rows, columns):
    if rows*columns != n:
        print('Không thể chuyển thành ma trận')
        return
    return matrix.reshape((rows, columns))


n = int(input('n = '))
a = Input(n)
print(a)

a = convert_to_matrix(a, 2, 3)
print(a)

b = a[::, 0]
c = a[::, 1]
print('Cột thứ nhất:', b)
print('Cột thứ hai:', c)

d = np.concatenate((b, c))
print(d)
print('Vị trí các phần tử > 1 trong d:', np.where(d>1))
  
print(np.sort(d, kind='heapsort'))
print(d)

k = int(input('k = '))
print(np.searchsorted(c, k))
print(np.insert(c, np.searchsorted(c, k), k))
