import math

xa, ya, xb, yb = map(float, input('Nhập lần lượt điểm A và B: ').split())

# print("Nhập điểm A: ")
# xa = float(input('+Nhập hoành: '))
# ya = float(input('+Nhập tung: '))

# print("Nhập điểm B: ")
# xb = float(input('+Nhập hoành: '))
# yb = float(input('+Nhập tung: '))

khoangCach = math.sqrt((xa-xb)**2 + (ya-yb)**2)

print('Khoảng cách điểm A và B là: ', round(khoangCach, 4))