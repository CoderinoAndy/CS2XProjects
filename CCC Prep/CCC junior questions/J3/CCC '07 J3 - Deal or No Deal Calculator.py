openedcases = int(input())

moneymap = {
    1:100,
    2:500,
    3:1000,
    4:5000,
    5:10000,
    6:25000,
    7:50000,
    8:100000,
    9:500000,
    10:1000000
}

cases = [100, 500, 1000, 5000, 10000, 25000, 50000, 100000, 500000, 1000000]


for x in range(openedcases):
    removedcase = int(input())
    cases.remove(moneymap[removedcase])

bankerOffer = int(input())

average = sum(cases)/len(cases)

if bankerOffer > average:
    print("deal")
else:
    print("no deal")

