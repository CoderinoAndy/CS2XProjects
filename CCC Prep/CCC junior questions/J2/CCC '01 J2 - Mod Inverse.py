def modinverse():
    x = int(input())
    m = int(input())
    for n in range(1, m):
        if (x*n) % m == 1:
            return n
    return "No such integer exists."
    
print(modinverse())