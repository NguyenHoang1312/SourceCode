# def f(x):
#     return 3*x**2 - 10*x + 5

# def truyhoi(a, b):
#     return a - (b-a)*f(a)/(f(b) - f(a))


# a, b = map(float, input().split())
# print(truyhoi(a, b))
# print(f(truyhoi(a, b)))

# import math

# def g(x):
#     return math.sqrt((10/3)*x - 5/3)

# def simple_iteration(x0, epsilon=1e-6, max_iterations=1000):
#     x = x0
#     for i in range(max_iterations):
#         x_next = g(x)
#         if abs(x_next - x) < epsilon:
#             return x_next
#         x = x_next
#     return None

# x0 = 0.5  # giá trị khởi tạo x trong khoảng [0, 1]
# solution = simple_iteration(x0)

# if solution is not None:
#     print(f"Nghiệm của phương trình là: {solution}")
# else:
#     print("Phương pháp lặp đơn không hội tụ với giá trị khởi tạo này.")

# def ff(x):
#     return (3*x**2 - 10*x + 5)/(6*x - 10)
# a = float(input())
# print(ff(a))
# print(a - ff(a))

a, b, c = map(float, input().split())

print(-0.3*b + 0.1*c + 0.2)
print(-0.2*a + 0.3*c + 0.7)
print(-0.05*a + 0.2*b + 0.8)
