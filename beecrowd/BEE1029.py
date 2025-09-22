def fib_calls(y):
    a = b = 0
    for i in range(y):
        a, b = b, a+b+2
    return a

def result(z):
    a = 0
    b = 1
    if z < 2:
        return 0
    else:
        for i in range(z):
            a,b = b, a+b
    return a

n = int(input())
for c in range(n):
    x = int(input())
    print(f'fib({x}) = {fib_calls(x)} calls = {result(x)}')
