n = int(input())
for i in range(n):
    phrase = input()
    size = len(phrase)//2
    final_string = final_string2 = ''
    for c in range(size-1,-1,-1):
        final_string += phrase[c]
    for a in range(len(phrase)-1,size-1,-1):
        final_string2 += phrase[a]
    print(final_string+final_string2)