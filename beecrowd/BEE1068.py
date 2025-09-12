while True:
    try:
        expression = input()
        if expression.count('(') == expression.count(')'):
            front = 0
            back = 0
            correto = True
            for i in range(len(expression)):
                if expression[i] == '(':
                    front += 1
                elif expression[i] == ')':
                    back += 1
                if back > front:
                    print('incorrect')
                    correto = False
                    break
            if correto:
                print('correct')
        else:
            print('incorrect')
    except EOFError:
        break