numPeps = int(input())
total = 0

dictPeps = {
    "Poblano": 1500, 
    "Mirasol": 6000,
    "Serrano": 15500,
    "Cayenne": 40000,
    "Thai": 75000,
    "Habanero": 125000
}

for _ in range(numPeps):
    total += dictPeps[input()]

print(total)