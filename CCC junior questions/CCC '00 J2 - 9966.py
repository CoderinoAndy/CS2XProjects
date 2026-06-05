# 1, 8, 11, 69, 88, 96
# Excluded numbers: 2, 4, 5, 7

def flipper(number):
    number = str(number)
    flipped = ""
    number = number[::-1]
    for digit in number:
        if digit in dicty.keys():
            flipped += dicty[digit]
    return flipped

dicty = {
    "1":"1",
    "8":"8",
    "6":"9",
    "9":"6",
    "0":"0"
}

m = int(input())
n = int(input())

count = 0

for x in range(m, n + 1):
    str_x = str(x)
    if "2" in str_x or "3" in str_x or "4" in str_x or "5" in str_x or "7" in str_x:
        continue
    flipped = flipper(x)
    if flipped == str_x:
        count += 1
print(count)