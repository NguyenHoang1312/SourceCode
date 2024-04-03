# Bài 1.1
dai = float(input('Nhập chiều dài = '))
rong = float(input('Nhập chiều rộng = '))

dienTich = dai * rong
chuVi = (dai + rong) * 2

print(f'Diện tích hình chữ nhật S = {dienTich}.')
print(f'Chu vi hình chữ nhật P = {chuVi}.')

# Bài 1.2
trongLuong = float(input('Nhập trọng lượng: '))
giaThanh = trongLuong * 20000
print('Giá bưu phẩm là', giaThanh)

# Bài 1.3
a, b = map(float, input('Nhập a, b = '))

if a == 0:
    if b == 0:
        print('Vô số nghiệm')
    else:
        print('Vô nghiệm')
else:
    print('x =', -b/a)

# Bài 1.4
sum = 0
for i in range(1, 101, 2):
    sum += i 
print('sum =', sum)

# Bài 1.5
print([i for i in range(1, 1001, 2)])

# Bài 1.6
degF = float(input('Nhập nhiệt độ Fahrenheit: '))
degC = (degF-32)/1.8
print('Nhiệt độ Celsius:', degC)

# Bài 1.7
num = int(input('Nhập num = '))
isPrime = True 

if num < 2:
    isPrime = False 
for i in range(2, num+1):
    if num % i == 0:
        isPrime = False 
        break 

if isPrime:
    print(f'{num} là số nguyên tố')
else:
    print(f'{num} không là số nguyên tố')
    

