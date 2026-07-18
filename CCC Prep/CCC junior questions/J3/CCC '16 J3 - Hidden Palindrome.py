def palindromeCheck(word):
    if word[::-1] == word:
        return True
    else:
        return False

word = input()
if len(word) == 1:
    print(1)
else:
    kingLength = 0
    initial = 0
    ender = 0
    while initial <= len(word) - 1:
        if palindromeCheck(word[initial:ender + 1]) and len(word[initial:ender + 1]) > kingLength:
            kingLength = len(word[initial:ender + 1])
        ender += 1
        if ender > len(word) - 1:
            ender = 0
            initial += 1

print(kingLength)