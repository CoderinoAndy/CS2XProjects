N = int(input())
Yesterday = input()
Today = input()

counter = 0
for x in range(N):
    if Yesterday[x] == Today[x] and Today[x] == "C":
        counter += 1

print(counter)
