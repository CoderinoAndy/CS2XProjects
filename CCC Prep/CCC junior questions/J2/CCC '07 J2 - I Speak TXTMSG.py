dictionary = {
    "CU":"see you",
    ":-)":"I'm happy",
    ":-(":"I'm unhappy",
    ";-)":"wink",
    ":-P":"stick out my tongue",
    "(~.~)":"sleepy",
    "TA":"totally awesome",
    "CCC":"Canadian Computing Competition",
    "CUZ":"because",
    "TY":"thank-you",
    "YW":"you're welcome",
}
while True:
    shortform = input()
    if shortform == "TTYL":
        print("talk to you later")
        break
    elif shortform not in dictionary.keys():
        print(shortform)
    else:
        print(dictionary[shortform])
