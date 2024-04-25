import my_vector

a = my_vector.vec_input()
print('Tổng các phần tử trong a là:', my_vector.vec_sum(a))

my_vector.vec_insert(a, 1, 77)
print(a)

my_vector.vec_delete(a, 3)
print(a)

b = my_vector.vec_input()
c = my_vector.vec_add(a, b)
print(c)