waypoint = input()
total = 0
pos = {
    'X': {
        "A": 0, "B": 1, "C": 2, "D": 3, "E": 4, "F": 5,
        "G": 0, "H": 1, "I": 2, "J": 3, "K": 4, "L": 5,
        "M": 0, "N": 1, "O": 2, "P": 3, "Q": 4, "R": 5,
        "S": 0, "T": 1, "U": 2, "V": 3, "W": 4, "X": 5,
        "Y": 0, "Z": 1, " ": 2, "-": 3, ".": 4, "\n": 5
    },
    'Y': {
        "A": 0, "B": 0, "C": 0, "D": 0, "E": 0, "F": 0,
        "G": 1, "H": 1, "I": 1, "J": 1, "K": 1, "L": 1,
        "M": 2, "N": 2, "O": 2, "P": 2, "Q": 2, "R": 2, 
        "S": 3, "T": 3, "U": 3, "V": 3, "W": 3, "X": 3,
        "Y": 4, "Z": 4, " ": 4, "-": 4, ".": 4, "\n": 4
    }
}

for i in range(len(waypoint) - 1):
    xdiff = abs(pos["X"][waypoint[i + 1]] - pos["X"][waypoint[i]])
    total += xdiff
    ydiff = abs(pos["Y"][waypoint[i + 1]] - pos["Y"][waypoint[i]])
    total += ydiff

distanceBetweenAandSecondX = pos["X"][waypoint[0]]
distanceBetweenAandSecondY = pos["Y"][waypoint[0]]
distanceToEnterX = abs(pos["X"][waypoint[len(waypoint) - 1]] - 5)
distanceToEnterY = abs(pos["Y"][waypoint[len(waypoint) - 1]] - 4)

total += distanceToEnterX
total += distanceToEnterY
total += distanceBetweenAandSecondX
total += distanceBetweenAandSecondY
print(total)

# Test case GPS
# G --> + 1 initial + 1 Y + 
# A -- + 1 --> G -- + 1Y & 3X --> P -- + 1Y & 3X --> S -- 1Y & 5X  --> ENTER
# total of 1 + 4 + 4 + 6 = 15



