ottawaTime = int(input())
bcTime = ottawaTime - 300
abTime = ottawaTime - 200
mbTime = ottawaTime - 100
nsTime = ottawaTime + 100
nlTime = ottawaTime + 130

timeList = []
timeList.append(bcTime)
timeList.append(abTime)
timeList.append(mbTime)
timeList.append(nsTime)
timeList.append(nlTime)

for index in range(len(timeList)):
    if timeList[index] < 0:
        timeList[index] = 2400 + timeList[index]
    elif timeList[index] >= 2400:
        timeList[index] = timeList[index] - 2400

print(f"{ottawaTime} in Ottawa")
print(f"{timeList[0]} in Victoria")
print(f"{timeList[1]} in Edmonton")
print(f"{timeList[2]} in Winnipeg")
print(f"{ottawaTime} in Toronto")
print(f"{timeList[3]} in Halifax")
print(f"{timeList[4]} in St. John's")
