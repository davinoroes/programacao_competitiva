while True:
    try:
        d, n = map(str, input().split())
    
        if d == '0' and n == '0':
            break
        if d in n:
            for i in range(len(n)):
                if n[i] == d:
                    nova_string_numero = n.replace(d, '')
            if nova_string_numero == '':
                print('0')
            else:
                print(int(nova_string_numero))
        else:
            print(n)
    except EOFError:
        break
    