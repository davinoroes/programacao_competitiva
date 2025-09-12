n = int(input())
value = 0
for i in range(n):
    answer = input()
    if '+' in answer:
        value += 1
    elif '-' in answer:
        value -= 1
print(value)