def mdc(a, b):
    while b:
        a, b = b, a % b
    return a
def mdc_tres_numeros(x,y,z):
    mdc_parcial = mdc(x,y)
    mdc_final = mdc(mdc_parcial,z)
    return mdc_final
while True:
    try:
        x,y,z = map(int, input().split())
        lista = [x, y, z]
        lista.sort()
        menores = lista[:2]
        maior = lista[2]
        if maior**2 == (menores[0]**2) + (menores[1]**2):
            if mdc_tres_numeros(x,y,z) == 1:
                print('tripla pitagorica primitiva')     
            else:
                print('tripla pitagorica')  
        else:
            print('tripla')
    except EOFError:
        break