from math import sqrt
x = int(input())
y = int(input())
mastercounter = 0
for n in range(x, y + 1):
    counter = 0
    for b in range(1, int(sqrt(n) + 1)):
        if n % b == 0:
            if b*b == n:
                counter += 1
            else:
                counter += 2
    if counter == 4:
        mastercounter += 1
print(f"The number of RSA numbers between {x} and {y} is {mastercounter}")
