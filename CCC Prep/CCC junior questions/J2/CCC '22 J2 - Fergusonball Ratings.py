totalplayers = int(input())
pointsPerPlayer = []

for _ in range(totalplayers):
    pointsScored = int(input())
    foulsCommitted = int(input())
    pointsPerPlayer.append((pointsScored*5) - (foulsCommitted*3))

star = True
counter = 0
for playerPoints in pointsPerPlayer:
    if playerPoints > 40:
        counter += 1
    else:
        star = False

if star:
    print(f"{counter}+")
else:
    print(counter)
