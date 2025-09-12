while True:
    n, m = map(int,input().split())
    if n == 0 and m == 0:
        break
    values = input().split()
    repetions = 0
    numbers_list = [int(number) for number in values]
    for i in range(1,n+1):
        if numbers_list.count(i) > 1:
            repetions += 1
    print(repetions)