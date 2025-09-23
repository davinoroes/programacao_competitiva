n = int(input())
for c in range(n):
    oi = input().split()
    if oi[1] == '1T':
        if int(oi[0]) <= 45:
            print(oi[0])
        else:
            add = int(oi[0]) - 45
            print(f'45+{add}')
    elif oi[1] == '2T':
        if int(oi[0]) <= 45:
            add = int(oi[0]) + 45
            print(add)
        else:
            add = int(oi[0]) - 45
            print(f'90+{add}')