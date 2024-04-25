a = list(input('Nhập mảng xâu a: ').split())
b = tuple(a)

count = 0
for i in b:
    if i.isdigit():
        count += 1
        
print(f'Có {count} phần tử có dạng số.')