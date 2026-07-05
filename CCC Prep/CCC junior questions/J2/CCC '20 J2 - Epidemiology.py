day = 0
P = int(input()) # max
N = int(input()) # Total initial infected
R = int(input()) # Rate

totalinfected = N
dayincrease = N
while totalinfected <= P:
    dayincrease = dayincrease*R
    totalinfected += dayincrease
    day += 1

print(day)

# Total infected: 2 + 2 + 
