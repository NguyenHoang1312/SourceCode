#1.1
spells = ['ngàn', 'trăm', 'chục', 'đơn vị']
number = input()

spells = spells[::-1]
number = number[::-1]
output = ''

for i in range(len(number)):
    output = number[i] + ' ' + spells[i] + ' ' + output
    
print(output)

