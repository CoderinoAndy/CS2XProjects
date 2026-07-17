k = int(input())

toprow = "*x*"
midrow = " xx"
botrow = "* *"

row = ""
for char in toprow:
    row += char*k
for _ in range(k):
    print(row)
row = ""
for char in midrow:
    row += char*k
for _ in range(k):
    print(row)
row = ""
for char in botrow:
    row += char*k
for _ in range(k):
    print(row)
