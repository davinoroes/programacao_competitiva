n = int(input())
number = 0
for i in range(n):
    answer = input()
    if '+' in answer:
        number += 1
    if '-' in answer:
        number -= 1
print(number)
