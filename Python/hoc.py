# class PERSON:
#     def __init__(self, name='', age=0, height=0, weight=0):
#         self.name = name;
#         self.age = age;
#         self.height = height;
#         self.weight = weight;
        
#     def input(self):
#         self.name = input('Nhap ten: ')
#         self.age = int(input('Nhap tuoi: '))
#         self.height = int(input('Nhap chieu cao: '))
#         self.weight = int(input('Nhap can nang: '))
        
#     def output(self):
#         print('{:<10}{:<10}{:<10}{:<10}'.format(self.name, self.age, self.height, self.weight))
        
#     def __eq__(self, other) -> bool:
#         if self.height != other.height:
#             return self.height < other.height
#         else:
#             return self.weight < other.weight
        
# a = PERSON('Hoang', 19, 165, 66)
# b = PERSON('Long', 10, 170, 60)
# c = PERSON('', 0, 0, 0)
# d = PERSON()

# # a.output()
# # c.input()
# # c.output()
import os

def WindowsTroubleshooting():
    print('Troubeshooting...')

import tkinter

windows = tkinter.Tk()
windows.title('Nguyễn Bá Hoàng')
windows.geometry('1024x768')
windows.mainloop()

        
    
    
