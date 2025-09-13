sub = {'l':'1','o':'0','O':'0'}
restritions = ['0','1','2','3','4','5','6','7','8','9','o','O','l',' ',',']
while True:
    try:
        n = input()
        value = True
        for letter in n:
            if letter not in restritions:
                print('error')
                value = False
                break
            if letter in sub:
                n = n.replace(letter,sub[letter])
            if letter == ',' or letter == ' ':
                n = n.replace(letter,'')
        if value:
            if int(n) > 2147483647:
                print('error')
            else:
                print(int(n))
    except EOFError:
        break

    