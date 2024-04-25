s = input('Nhập xâu s: ')
q = input('Nhập xâu q: ')

if s in q:
    print('s là xâu con của q.')
else:
    print('s không phải xâu con của q.')
    
p = s + q
print('Xâu p:', p)

p = p.replace('Ha', 'Ba')
print('Xâu p sau khi thay:', p)

character = dict()
j = 0
for i in p.split():
    character[j] = i
    j += 1
print(character)


