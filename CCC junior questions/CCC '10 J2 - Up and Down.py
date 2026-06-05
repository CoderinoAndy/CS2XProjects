a = int(input())
b = int(input())

c = int(input())
d = int(input())

s = int(input())

byron = []
nikky = []

for _ in range(a):
    nikky.append("f")
for _ in range(b):
    nikky.append("b")
for _ in range(c):
    byron.append("f")
for _ in range(d):
    byron.append("b")

# nikky = ["f", "f", "f", "f", "b", "b"]
# byron = ["f", "f", "f", "f", "f", "b", "b", "b"]


netcyclenikky = a - b
netcyclebyron = c - d

byroncycles = s//len(byron) # in test case this is 2
nikkycycles = s//len(nikky) # in test case this is like 12//8 or 1

byrontotal = byroncycles*netcyclebyron # in test case this becomes 4
nikkytotal = nikkycycles*netcyclenikky # in test case this becomes 2
# s left after byron or nikky cycles 
# = s - len(byron)*byroncycles
# = s - len(nikky)*nikkycycles
if s - len(byron)*byroncycles > 0:
    for x in range(0, (s - len(byron)*byroncycles) + 1):
        if byron[x] == "b":
            byrontotal -= 1
        else:
            byrontotal += 1
if s - len(nikky)*nikkycycles > 0:
    for y in range(0, (s - len(nikky)*nikkycycles) + 1):
        if nikky[y] == "b":
            nikkytotal -= 1
        else:
            nikkytotal += 1

if byrontotal > nikkytotal:
    print("Byron")
elif byrontotal < nikkytotal:
    print("Nikky")
else:
    print("Tied")