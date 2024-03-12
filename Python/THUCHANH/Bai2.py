########################################################################################################
#2.1
# import math

# def isPrime(number):
#     for i in range(2, int(math.sqrt(number))+1):
#         if number % i == 0:
#             return False 
#     return number > 1

# def isPalindromePrime(number):
#     for i in range(2, int(math.sqrt(number))+1):
#         if number % i == 0:
#             return False
        
#     number = str(number)
#     left, right = 0, len(number)-1
#     while left < right:
#         if number[left] != number[right]:
#             return False
#         left += 1
#         right -= 1  
#     return True
    

# while True:
#     left = int(input('Nhap S: '))
#     right = int(input('Nhap E: '))
#     if left < right and len(str(right)) < 8:
#         break
    
# sum = 0
# for i in range(left, right+1):
#     if isPalindromePrime(i):
#         sum += i 

# print(f'Tổng các số nguyên tố đối xứng trong đoạn [{left}, {right}] là {sum}')

########################################################################################################
#2.2
n = int(input())
a = ['0', '1']
rs = ['0', '1']

while True:
    if len(rs) == n+1:
        break
    temp = a[len(a)-1]
