donutsAvailable = int(input())
numEvents = int(input())

for _ in range(numEvents):
    incDec = input()
    quantIncDec = int(input())
    if incDec == "+":
        donutsAvailable += quantIncDec
    else:
        donutsAvailable -= quantIncDec

print(donutsAvailable)