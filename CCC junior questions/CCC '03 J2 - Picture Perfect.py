# The minimum perimeter is when the two numbers are closest together
from math import sqrt
collection = []
while True:
    photos = int(input())
    if photos == 0:
        break
    width = int(sqrt(photos))
    while photos % width != 0:
        width -= 1
    length = photos // width
    perimeter = 2*(width + length)
    collection.append(f"Minimum perimeter is {perimeter} with dimensions {width} x {length}")
for x in collection:
    print(x)

