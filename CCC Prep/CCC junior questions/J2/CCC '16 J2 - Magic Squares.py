table = []
for x in range(4):
    row = input().split(" ")
    numrow = []
    for number in row:
        numrow.append(int(number))
    table.append(numrow)

magic = True

rowtotal = sum(table[0])
columntotal = table[0][0] + table[1][0] + table [2][0] + table[3][0]

for i in range(1, 4):
    if table[0][i] + table[1][i] + table[2][i] + table[3][i] != columntotal:
        magic = False
        break
    if sum(table[i]) != rowtotal:
        magic = False
        break
    if rowtotal != columntotal:
        magic = False
        break

if magic:
    print("magic")
else:
    print("not magic")





