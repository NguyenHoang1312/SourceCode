a = list(input('Nhập mảng a: ').split())
b = list(input('Nhập mảng b: ').split())
n, m = len(a), len(b)

a.sort()
b.sort()

merge_sorted_list = []
i = j = 0

while i < n and j < m:
    if a[i] < b[j]:
        merge_sorted_list.append(a[i])
        i += 1
    else:
        merge_sorted_list.append(b[j])
        j += 1

while i < n:
    merge_sorted_list.append(a[i])
    i += 1
    
while j < m:
    merge_sorted_list.append(b[j])
    j += 1
    
print('Mảng trộn:', merge_sorted_list)