L = int(input())
outputlist = []
for _ in range(L):
    code = input().split(" ")
    freq = int(code[0])
    letter = code[1]
    outputlist.append(freq*letter)
for output in outputlist:
    print(output)
    