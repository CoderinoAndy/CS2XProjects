DusaSize = int(input())
while True:
    yobisSize = int(input())
    if DusaSize > yobisSize:
        DusaSize += yobisSize
    else:
        break
print(DusaSize)