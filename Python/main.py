def max(a, b, c):
    mx = a
    if mx < b: mx = b 
    if mx < c: mx = c
    return mx

a, b, c, d, e = map(int, input().split())
max1 = max(a, b, c)
max2 = max(max1, d, e)

print(max2)