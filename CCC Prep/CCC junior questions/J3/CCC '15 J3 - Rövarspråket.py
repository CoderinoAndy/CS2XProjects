word = input()
vowels = ["a", "e", "i", "o", "u"]

consonantToVowel = {
    "b":"a",
    "c":"a",
    "d":"e",
    "f":"e",
    "g":"e",
    "h":"i",
    "j":"i",
    "k":"i",
    "l":"i",
    "m":"o",
    "n":"o",
    "p":"o",
    "q":"o",
    "r":"o",
    "s":"u",
    "t":"u",
    "v":"u",
    "w":"u",
    "x":"u",
    "y":"u",
    "z":"u",
}
consonantToConsonant = {
    "b":"c",
    "c":"d",
    "d":"f",
    "f":"g",
    "g":"h",
    "h":"j",
    "j":"k",
    "k":"l",
    "l":"m",
    "m":"n",
    "n":"p",
    "p":"q",
    "q":"r",
    "r":"s",
    "s":"t",
    "t":"v",
    "v":"w",
    "w":"x",
    "x":"y",
    "y":"z",
    "z":"z",
}
finalOutput = ""
for letter in word:
    output = ""
    if letter not in vowels:
        output += letter
        output += consonantToVowel[letter]
        output += consonantToConsonant[letter]
    else:
        output = letter
    finalOutput += output

print(finalOutput)


