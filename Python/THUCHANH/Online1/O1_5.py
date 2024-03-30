config = {
    'n': 1500,
    'CLUSTERS': 3,
    'ITER': 1000,
    'METHOD': 'DCA CLUSTERING',
    'MEASURE': 'EUCLIDEAN',
    'YEARS': 9,
    'MAX': 200    
}

def printTuDien(td):
    print('Nội dung từ điển:')
    print('+' + '-'*20 + '+' + '-'*20 + '+')
    print(f'| Keys               | Values             |')
    print('+' + '-'*20 + '+' + '-'*20 + '+')
    for key in td:
        print(f'| {key:<19}| {td[key]:<19}|')
    print('+' + '-'*20 + '+' + '-'*20 + '+')

printTuDien(config)
    
config['MEASURE'] = 'MANHATTAN'
printTuDien(config)

config['LOSS FUNCTION'] = 'SOFT MAX'
printTuDien(config)

config.pop('YEARS')
printTuDien(config)

s = input('Nhập xâu s: ')
if s in config:
    print('s có giá trị trùng trong config.')
else:
    print('s không có giá trị trùng trong config.')
    
s = set()
for key, value in config.items():
    s.add(key)
    s.add(value)
print(s)

l = list()
for key, value in config.items():
    l.append(key)
    l.append(value)
print(l)
