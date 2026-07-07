nAdj = int(input())
nNoun = int(input())
adjectives = []
nouns = []
for _ in range(nAdj):
    adjectives.append(input())
for _ in range(nNoun):
    nouns.append(input())

similes = []

for noun in nouns:
    for adjective in adjectives:
        similes.append(f"{adjective} as {noun}")
for simile in similes:
    print(simile)