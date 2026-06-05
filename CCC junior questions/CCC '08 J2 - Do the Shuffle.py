songs = ["A", "B", "C", "D", "E"]
while True:
    b = int(input())
    n = int(input())
    if b == 1:           
        for _ in range(n):
            songs.append(songs[0])
            songs.remove(songs[0])
    elif b == 2:
        for _ in range(n):
            songs.insert(0, songs.pop())
    elif b == 3:
        for _ in range(n):
            songs[0], songs[1] = songs[1], songs[0]
    else:
        break

print(*songs)

# B A B C D E