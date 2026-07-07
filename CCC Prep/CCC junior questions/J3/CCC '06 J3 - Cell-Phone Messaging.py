timeDict = {'a': 1, 'b': 2, 'c': 3, 'd': 1, 
        'e': 2, 'f': 3, 'g': 1, 'h': 2, 
        'i': 3, 'j': 1, 'k': 2, 'l': 3, 
        'm': 1, 'n': 2, 'o': 3, 'p': 1, 
        'q': 2, 'r': 3, 's': 4, 't': 1, 
        'u': 2, 'v': 3, 'w': 1, 'x': 2, 
        'y': 3, 'z': 4
        }



while True:
    word = input()
    if word == "halt":
        break
    timeTotal = 0
    index = 0
    if len(word) > 1:
        for letter in word[1:]:
            pause = False
            if letter != word[index]:
                timeTotal += timeDict[letter]
            else:
                timeTotal += timeDict[letter]
                timeTotal += 2
                pause = True
            if ((letter in "abc" and word[index] in "abc") or (letter in "def" and word[index] in "def") or (letter in "ghi" and word[index] in "ghi") or (letter in "jkl" and word[index] in "jkl") or (letter in "mno" and word[index] in "mno") or (letter in "pqrs" and word[index] in "pqrs") or (letter in "tuv" and word[index] in "tuv") or (letter in "wxyz" and word[index] in "wxyz")) and not pause:
                timeTotal += 2
            index += 1
        timeTotal += timeDict[word[0]]
    else:
        timeTotal = timeDict[word]
    print(timeTotal)





