def tao_tu_dien_hang_hoa():
    so_luong = int(input('Nhập số lượng hàng hóa: '))
    tu_dien = dict()
    for i in range(so_luong):
        print(f'Hàng hóa thứ {i+1}:')
        ma_hang = input('+ Nhập mã hàng: ')
        so_luong_hang = int(input('+ Nhập số lượng: '))
        tu_dien[ma_hang] = so_luong_hang
    return tu_dien

def tao_tu_dien_nha_cung_cap():
    so_luong = int(input('Nhập số lượng nhà cung cấp: '))
    tu_dien = dict()
    for i in range(so_luong):
        print(f'Nhà cung cấp thứ {i+1}:')
        ma_hang = input('+ Nhập mã nhà cung cấp: ')
        so_luong_hang = input('+ Nhập tên nhà cung cấp: ')
        tu_dien[ma_hang] = so_luong_hang
    return tu_dien

def in_tu_dien(tu_dien):
    for i in tu_dien:
        print(f'|{i:<10}|{tu_dien[i]:<10}|')

def kiem_tra_hang(tu_dien, ma_hang):
    if ma_hang in tu_dien:
        tu_dien[ma_hang] = 200
    else:
        tu_dien[ma_hang] = input('Nhập số lượng cho mã hàng H001: ')

def xoa_hang(tu_dien, so_luong):
    for key in tu_dien:
        if tu_dien[key] == so_luong:
            tu_dien.pop(key)

def tach_tu_dien(tu_dien):
    ma_hang = []
    so_luong = []
    for key, value in tu_dien:
        ma_hang.append(key)
        so_luong.append(value)
    return ma_hang, so_luong

# Chương trình chính
hang_hoa = tao_tu_dien_hang_hoa()
nha_cung_cap = tao_tu_dien_nha_cung_cap()

in_tu_dien(nha_cung_cap)

kiem_tra_hang(hang_hoa, 'H001')
in_tu_dien(hang_hoa)

ma_hang, so_luong = tach_tu_dien(hang_hoa)

for i in range(3):
    print(ma_hang[i])
    
for i in range(-1, -4, -1):
    print(so_luong[i])

