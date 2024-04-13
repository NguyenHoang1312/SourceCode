import numpy as np
import pandas as pd

def check_array(arr):
    tang_ngat = [arr[i]<arr[i+1] for i in range(len(arr)-1)]
    giam_ngat = [arr[i]>arr[i+1] for i in range(len(arr)-1)]
    tang = [arr[i]<=arr[i+1] for i in range(len(arr)-1)]
    giam = [arr[i]>=arr[i+1] for i in range(len(arr)-1)]
    bang = [arr[i]==arr[i+1] for i in range(len(arr)-1)]
    if all(bang):
        return 'tất cả bằng nhau'
    elif all(tang_ngat):
        return 'tăng ngặt'
    elif all(giam_ngat):
        return 'giảm ngặt'
    elif all(giam):
        return 'giảm'
    elif all(tang):
        return 'tăng'
    else:
        return 'Không sắp xếp'

a = np.array([[1, 1, 1, 1, 2], [2, 3, 4, 5, 6]])
print(len(np.nditer(a)))
