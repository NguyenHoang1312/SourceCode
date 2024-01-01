a = [int(x) for x in range(1, 101)]

def check(e):
    return not e&1

b = list(filter(check, a))

print(b)