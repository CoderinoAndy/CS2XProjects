def americanadian(word):
    vowels = ["a", "e", "i", "o", "u", "y"]
    length = len(word)
    if length <= 4:
        return word
    wordlist = list(word)
    if wordlist[length - 2] + wordlist[length - 1] == "or" and wordlist[length - 3] not in vowels:
        wordlist.insert(length - 1, "u")
    return "".join(wordlist)
mylist = []
while True:
    word = input()
    if word == "quit!":
        break
    mylist.append(word)
for x in mylist:
    print(americanadian(x))
