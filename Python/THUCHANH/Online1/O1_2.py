a = set(input('Các sinh viên đăng ký học tại bàn 1: ').split())
b = set(input('Các sinh viên đăng ký học tại bàn 2: ').split())

print('Các sinh viên đăng ký học tại cả hai bàn là:', a.intersection(b))
print('Các sinh viên đã đăng ký học:', a.union(b))
print('Các sinh viên chỉ đăng ký ở bàn 1 là:', a.difference(b))
