n = int(input())
for i in range(n):
    name = input()
    note = input().split()
    media = 0
    float_list = [float(x) for x in note]
    if len(float_list) == 1:
        media = float_list[0]/2
    for number in float_list:
        if 1 < len(float_list) < 4:
            media = sum(float_list)/len(float_list) 
        elif len(float_list) == 4:
            float_list.remove(min(float_list))
            media = sum(float_list)/3
    print(f'{name}: {media:.1f}')