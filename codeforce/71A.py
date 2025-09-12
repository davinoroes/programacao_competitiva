n = int(input())
for i in range(n):
    word = input()
    if len(word) > 10:
        size = len(word) - 2
        print(f'{word[0]}{size}{word[len(word)-1]}')
    else:
        print(word)