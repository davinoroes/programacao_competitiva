while True:
    try:    
        phrase = input().split()
        if phrase == ['*']:
            break
        first_letter = phrase[0][0].lower()
        tautogram = True
        for word in phrase:
            if word[0].lower() != first_letter:
                tautogram = False
        print('Y' if tautogram else 'N')
    except EOFError:
        break