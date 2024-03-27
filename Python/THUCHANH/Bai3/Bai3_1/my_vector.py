# Nhập mảng
def vec_input():
    num = int(input('Nhập n = '))
    vector = [0]*num
    for i in range(num):
        vector[i] = int(input(f'vector[{i}] = '))
    return vector 

# Tính tổng các phần tử trong mảng
def vec_sum(vector):
    sum = 0
    for element in vector:
        sum += element
    return sum 

# Chèn phần tử vào mảng
def vec_insert(vector, index, element):
    vector.insert(index, element)
    
# Xóa phần tử trong mảng
def vec_delete(vector, index):
   vector.pop(index) 
   
# Cộng hai mảng cùng kích thước
def vec_add(vector1, vector2):
    if len(vector1) != len(vector2):
        return []
    else: 
        return vector1 + vector2 
    


    