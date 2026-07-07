directions = []
streets = []
final = []

while True:
    direction = input()
    street = input()
    directions.append(direction)
    if street == "SCHOOL":
        break
    streets.append(street)
    

# [R, R, L, R, L]
# [A, B, C, D]

streets = streets[::-1]
directions = directions[::-1]

# [L, R, L, R, R]
# [D, C, B, A]

for streetID in range(len(streets)):
    if directions[streetID] == "R":
        directions[streetID] = "LEFT"
    else:
        directions[streetID] = "RIGHT"

if directions[len(directions) - 1] == "R":
    directions[len(directions) - 1] = "LEFT"
else:
    directions[len(directions) - 1] = "RIGHT"

# Jeez
# [RIGHT, LEFT, RIGHT, LEFT, LEFT]
# [D, C, B, A]
for streetID in range(len(streets)):
    print(f"Turn {directions[streetID]} onto {streets[streetID]} street.")
print(f"Turn {directions[len(directions) - 1]} into your HOME.")
