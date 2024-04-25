CONFIG = {
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
    print('| Keys' + ' '*15 + '| Values' + ' '*13 + '|')
    print('+' + '-'*20 + '+' + '-'*20 + '+')
    for key in td:
        print(f'| {key:<19}| {td[key]:<19}|')
    print('+' + '-'*20 + '+' + '-'*20 + '+')

printTuDien(CONFIG)
    
CONFIG['MEASURE'] = 'MANHATTAN'
printTuDien(CONFIG)

CONFIG['LOSS FUNCTION'] = 'SOFT MAX'
printTuDien(CONFIG)

CONFIG.pop('YEARS')
printTuDien(CONFIG)

s = input('Nhập xâu s: ')
if s in CONFIG:
    print('s có giá trị trùng trong config.')
else:
    print('s không có giá trị trùng trong config.')
    
s = set()
for key, value in CONFIG.items():
    s.add(key)
    s.add(value)
print(s)

l = list()
for key, value in CONFIG.items():
    l.append(key)
    l.append(value)
print(l)
