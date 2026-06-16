message = input()
happycount = message.count(":-)")
sadcount = message.count(":-(")
if happycount == 0 and sadcount == 0:
    print("none")
elif happycount == sadcount:
    print("unsure")
elif happycount > sadcount:
    print("happy")
else:
    print("sad")