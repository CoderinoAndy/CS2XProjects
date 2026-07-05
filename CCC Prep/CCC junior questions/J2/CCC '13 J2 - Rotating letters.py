rotatableLetters = ["I", "O", "S", "H", "Z", "X", "N"]
word = input()
rotatable = True
for letter in word:
    if letter not in rotatableLetters:
        rotatable = False
        break

if rotatable:
    print("YES")
else:
    print("NO")