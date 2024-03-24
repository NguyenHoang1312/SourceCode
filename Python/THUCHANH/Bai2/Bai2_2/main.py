import chuyen_ti_gia

quang_duong = float(input('Nhập quãng đường đã bay: '))
gia = float(input('Số tiền để bay được 1 dặm là: '))
total = quang_duong * gia

print('Tổng số tiền phải trả là:', total)
print('Tổng số tiền phải bằng đô la mỹ là:', chuyen_ti_gia.vnd_usd(total))
print('Tổng số tiền phải bằng yên nhật là:', chuyen_ti_gia.vnd_yen(total))
print('Tổng số tiền phải bằng bảng anh là:', chuyen_ti_gia.vnd_pound(total))
