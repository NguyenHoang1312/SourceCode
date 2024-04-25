a = ()
n = int(input('Nhập số lượng phần tử: '))

for i in range(n):
    a += (input(f'Nhập phần tử thứ {i}: '),)
    
print('Tuple a =', a)

a = tuple(map(int, a))
print('Tuple a kiểu số =',a)

average = 0
for i in a:
    average += i
average /= n
print('Trung bình cộng các phần tử trong tuple:', average)