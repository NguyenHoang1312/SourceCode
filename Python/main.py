class Person:
    def __init__(self):
        self.name = ''; 
        self.age = 0; 
        self.score = 0;
    def __init__(self, name, age, score):
        self.name = name; 
        self.age = age; 
        self.score = score;
    def setter(self):
        self.name = input('Nhập tên: ')
        self.age = input('Nhập tuổi: ')
        self.score = input('Nhập điểm: ')
    def getter(self):
        print('Tên:', self.name);
        print('Tuổi:', self.age);
        print('Điểm:', self.score);

a = Person()
a.setter()
a.getter()
