def altitude():
    h = int(input())
    M = int(input())
    # A = -6t^4 + ht^3 + 2t^2 + t
    for t in range(1, M + 1):
        A = -6*(t**4) + h*(t**3) + 2*(t**2) + t
        if A <= 0:
            return t
    return 0

t = altitude()
if t == 0:
    print("The balloon does not touch ground in the given time.")
else:
    print("The balloon first touches ground at hour:")
    print(t)