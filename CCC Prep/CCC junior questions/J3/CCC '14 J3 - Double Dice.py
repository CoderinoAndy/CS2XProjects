antoniaTotal = 100
davidTotal = 100

for round in range(int(input())):
    raw = input()
    antonia = int(raw[0])
    david = int(raw[2])
    if david < antonia:
        davidTotal -= antonia
    elif david > antonia:
        antoniaTotal -= david

print(antoniaTotal)
print(davidTotal)