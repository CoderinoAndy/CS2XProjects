N = int(input())
k = int(input())
summy = 0
for x in range(k + 1):
    summy += int(str(N) + "0"*x)

print(summy)
