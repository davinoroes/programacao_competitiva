sub = {'l':'1','o':'0','O':'0'}
restritions = ['0','1','2','3','4','5','6','7','8','9','o','O','l',' ',',']
while True:
    try:
        n = input()
        value = True
        converted = ''
        for letter in n:
            if letter not in restritions:
                print('error')
                value = False
                break
            if letter in sub:
                converted += sub[letter]
            elif letter ==  ' ' or letter == ',':
                continue
            else:
                converted += letter
        if value:
            if converted == '':
                print('error')
                continue
            num = int(converted)
            if num > 2147483647:
                print('error')
            else:
                print(num)
    except EOFError:
        break

    