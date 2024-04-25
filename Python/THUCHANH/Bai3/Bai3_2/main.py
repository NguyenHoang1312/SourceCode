k = int(input('Nhập k = '))
a = list(map(int, input(f'Nhập {k} phần tử: ').split()))

n = int(input('Nhập số dòng n = '))
m = int(input('Nhập số cột m = '))

if n*m > k:
    print('Không thể xây dựng ma trặn.')
else:
    output = []
    index = 0
    for i in range(n):
        line = []
        for j in range(m):
            line.append(a[index])
            index += 1
        output.append(line)
    
    for i in range(n):
        for j in range(m):
            print(output[i][j], end = ' ')
        print()
            