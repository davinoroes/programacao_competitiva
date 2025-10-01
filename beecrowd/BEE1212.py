while True:
    try:
        n1, n2 = input().split()
        if n1 == '0' and n2 == '0':
            break
        max_len = (max(len(n1),len(n2)))
        n1 = n1.zfill(max_len)
        n2 = n2.zfill(max_len)
        carry = 0
        c = 0
        for i in range(max_len-1,-1,-1):
            sum = int(n1[i]) + int(n2[i]) + c
            if sum >= 10:
                carry += 1
                c = 1
            else:
                c = 0
        if carry == 0:
            print('No carry operation.')
        elif carry == 1:
            print('1 carry operation.')
        else:
            print(f'{carry} carry operations.')
    except EOFError:
        break