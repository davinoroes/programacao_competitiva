from math import isqrt

def soma_quadrada(z):
    if z < 0:
        return False
    value = False
    qtd = isqrt(z)
    for a in range(qtd+1):
        b = z - a**2
        b2 = isqrt(b)
        if b2**2 == b:
            value = True
    return value

while True:
    try:
        num = int(input())
        if soma_quadrada(num):
            print('YES')
        else:
            print('NO')
    except EOFError:
        break

        
    
        