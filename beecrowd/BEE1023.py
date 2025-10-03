city =  0
while True:
    try:
        N = int(input())
        if N == 0:
            break
        people = volume = 0
        city += 1
        consumo_dict = {}
        for i in range(N):
            x, y = map(int, input().split())
            people += x
            volume += y
            consumo = y // x
            if consumo in consumo_dict:
                consumo_dict[consumo] += x
            else:
                consumo_dict[consumo] = x
        result = sorted(consumo_dict.items())
        print(f'Cidade# {city}:')
        print(' '.join(f'{p}-{c}' for c, p in result))
        media = volume / people
        media_str = str(media)
        if '.' in media_str:
            ponto = media_str.find('.')
            media_trunc = media_str[:ponto+3]
        else:
            media_trunc = media_str
        print(f'Consumo medio: {media_trunc} m3.')
    except EOFError:
        break
