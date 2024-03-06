########################################################################################################
#1.1
# spells = ['ngàn', 'trăm', 'chục', 'đơn vị']
# number = input()

# spells = spells[::-1]
# number = number[::-1]
# output = ''

# for i in range(len(number)):
#     output = number[i] + ' ' + spells[i] + ' ' + output
    
# print(output)

########################################################################################################
#1.2
# from math import *

# print('Nhập điểm A:')
# x1 = float(input('Nhập x1: '))
# y1 = float(input('Nhập y1: '))

# print('Nhập điểm B:')
# x2 = float(input('Nhập x2: '))
# y2 = float(input('Nhập y2: '))

# Euclidean = sqrt((x1-x2)**2 + (y1-y2)**2)
# Manhattan = fabs(x1-x2) + fabs(y1-y2)
# Cosin = 1 - (x1*x2 + y1*y2)/(sqrt(x1*x1 + y1*y1) + sqrt(x2*x2 + y2*y2))

# print('Khoảng cách Euclidean:', Euclidean)
# print('Khoảng cách Manhattan:', Manhattan)
# print('Khoảng cách Cosin:', Cosin)

########################################################################################################
#1.3
# from math import *

# a = float(input('Nhập a: '))
# b = float(input('Nhập b: '))
# c = float(input('Nhập c: '))

# if a == 0:
#     if b == 0:
#         if c == 0:
#             print('Vô số nghiệm')
#         else:
#             print('Vô nghiệm')
#     else:
#         print('x =', -c/b)
# else:
#     delta = b*b - 4*a*c
#     if delta < 0:
#         print('Vô nghiệm')
#     elif delta == 0:
#         print('x =', -b/(2*a))
#     else:
#         print('x1 =', (-b + sqrt(delta))/(2*a))
#         print('x2 =', (-b - sqrt(delta))/(2*a))

########################################################################################################
#1.4
# x = float(input('Nhập x = '))
# n = int(input('Nhập n = '))
# s = 0

# if n % 2 == 0:
#     s = 2016*x
#     for i in range(2, n+1):
#         s += (x**i)/(3**(i-1))
        
# print(s) 

########################################################################################################
#1.5
# from math import *

# number = int(input('number = '))
# isPrime = True
# isPalindrome = True
# square = int(sqrt(number))

# if number < 2:
#     isPrime = False 
# for i in range(2, square+1):
#     if number % i == 0:
#         isPrime = False 
#         break 

# number = str(number)
# left, right = 0, len(number)-1
# while (left < right):
#     if number[left] != number[right]:
#         isPalindrome = False
#         break
#     left += 1
#     right -= 1
    
# if isPrime and isPalindrome:
#     print('Số hợp lệ')
# else:
#     print('Số không hợp lệ')
