sinhVien = dict()
soLuong = int(input('Số lượng sinh viên là: '))

for i in range(soLuong):
    print(f'Nhập sinh viên thứ {i+1}:')
    maSinhVien = input('+ Nhập mã sinh viên: ')
    diem = float(input('+ Nhập điểm tổng kết: '))
    sinhVien[maSinhVien] = diem
    
def printSinhVien(a):
    for i in a:
        print(i, '   ', a[i])
    
dem = 0
for key in sinhVien:
    if 2.5 <= sinhVien[key] <= 3.5:
        dem += 1
print(f'Có {dem} sinh viên có điểm tổng trong đoạn [2.5, 3.5].')

sinhVien[input('Nhập mã sinh viên: ')] = float(input('Nhập điểm sinh viên: '))
print('Sau khi thêm:')
printSinhVien(sinhVien)

newSinhVien = dict()
for key in sinhVien:
    if sinhVien[key] >= 2.0:
        newSinhVien[key] = sinhVien[key]
print('Sau khi xóa:')
printSinhVien(newSinhVien)

 
    
