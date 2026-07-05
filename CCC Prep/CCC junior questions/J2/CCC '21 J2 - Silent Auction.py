numBids = int(input())

names = []
bids = []

for _ in range(numBids):
    names.append(input())
    bids.append(int(input()))

biggest = max(bids)

counter = 0
for bid in bids:
    if bid == biggest:
        print(names[counter])
        break
    else:
        counter += 1

