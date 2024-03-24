from math import *

def isPrime(num):
    for i in range(2, int(sqrt(num))+1):
        if num % i == 0:
            return False 
    return num > 1

def isPalindrome(num):
    num = str(num)
    left = 0
    right = len(num) - 1
    while left < right:
        if num[left] != num[right]:
            return False 
        left += 1
        right -= 1
    return True

s = int(input('Nhập s = '))
e = int(input('Nhập e = '))

while s >= e or e//10000000 < 0:
    print('s < e và e không quá 8 chữ số, nhập lại:')
    s = int(input('Nhập s = '))
    e = int(input('Nhập e = '))
    
sum = 0

for i in range(s, e+1):
    if isPrime(i) and isPalindrome(i):
        sum += i
        
print('Tổng các số vừa nguyên tố vừa đối xứng trong đoạn [s, e] là:', sum)