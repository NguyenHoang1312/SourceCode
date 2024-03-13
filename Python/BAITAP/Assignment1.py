# Nhập vào từ bàn phím một từ điển (dictionary) gồm n items, mỗi item gồm mã hàng và số lượng của chúng.
def nhapHangHoa():
    output = {}
    n = int(input('Nhập số lượng: '))
    for _ in range(n):
        keys = input('Nhập mã hàng: ')
        values = int(input('Nhập số lượng mỗi loại hàng: '))
        output[keys] = values
    return output 

hangHoa = nhapHangHoa()

# Khởi tạo một từ điển thứ hai gồm m items, mỗi item chứa mã nhà cung cấp và tên nhà cung cấp tương ứng.
# In từ điển thứ hai ra màn hình.
def nhapNhaCungCap():
    output = {}
    m = int(input('Nhập số lượng: '))
    for _ in range(m):
        keys = input('Nhập mã nhà cung cấp: ')
        values = input('Nhập tên nhà cung cấp: ')
        output[keys] = values
    return output 

nhaCungCap = nhapNhaCungCap()
print(nhaCungCap)

# Cho biết trong từ điển thứ nhất có chứa mã hàng “H001” hay không?
# Nếu có, hãy sửa lại số lượng của nó thành 200.
# Nếu không có, hãy bổ sung dữ liệu mã hàng đó từ bàn phím.
def checkKeys(dictionary, key):
    if key in dictionary.keys:
        dictionary[key] = 200
    else:
        value = int(input('Nhập dữ liệu: '))
        dictionary[key] = value
        
checkKeys(hangHoa, 'H001')

# Xóa tất cả các mặt hàng có số lượng bằng 0 ra khỏi từ điển.
def deleteValues(dictionnary: dict):
    output = {}
    for key, value in dictionnary.items():
        if value != 0:
            output[key] = value     
    return output

hangHoa = deleteValues(hangHoa)
print(hangHoa)

# Chuyển dữ liệu của từ điển thứ nhất sang hai list. 
# List thứ nhất chứa các mã hàng, list thứ 2 chứa các số lượng của từng item. 
# In ra màn hình 3 phần tử đầu tiên (nếu có) của list thức nhất 
#  và 3 phần từ cuối cùng (nếu có) của list thứ hai.
def splitDict(dictionary: dict):
    keys = []
    values = []
    for key, value in dictionary.items():
        keys.append(key)
        values.append(value)
    return keys, values

def printFirst3(keys):
    if len(keys) < 3:
        return 
    else:
        print(keys[:3])
        
def printlast3(values):
    if len(values) < 3:
        return 
    else:
        print(values[:-4:-1])
        
maHang, soLuongHang = splitDict(hangHoa)
print(maHang)
print(soLuongHang)
printFirst3(maHang)
printlast3(soLuongHang)
        



