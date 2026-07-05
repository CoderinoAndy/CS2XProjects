x = int(input())
y = int(input())
difference = y - x
programmer = []
for l in range(0, difference + 1):
    if l % 2 == 0 and l % 3 == 0 and l % 4 == 0 and l % 5 == 0:
        print(f"All positions change in year {x + l}")



# common multiples of 2, 3, 4, 5
