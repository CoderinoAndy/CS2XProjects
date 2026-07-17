# t1, t2, . . . tm
doubleprev = int(input())
singleprev = int(input())
length = 2
newterm = doubleprev - singleprev

while True:
    length += 1
    if newterm > singleprev:
        break
    doubleprev = singleprev
    singleprev = newterm
    newterm = doubleprev - singleprev
    
print(length)