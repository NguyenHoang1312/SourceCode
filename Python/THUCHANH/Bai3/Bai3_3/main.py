a = list(input('Nhập mảng a: ').split())
b = list(input('Nhập mảng b: ').split())

n = len(a)
m = len(b)

i, j = 0, 0
merge_list = []

while i < n and j < m:
    merge_list.append(a[i])
    merge_list.append(b[j])
    i += 1
    j += 1
    
while i < n:
    merge_list.append(a[i])
    i += 1
    
while j < m:
    merge_list.append(b[j])
    j += 1
    
print(merge_list)