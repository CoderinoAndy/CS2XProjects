A = 0
B = 0
line = ""
inputs = []
while True:
    line = input()
    if line == "7":
        break
    else:
        inputs.append(line)



for line in inputs:
    if line[0] == "1":
        if line[2] == "A":
            if line[4] == "B":
                A = B
            else:
                A = int(line.split(" ")[2])
        else:
            if line[4] == "A":
                B = A
            else:
                B = int(line.split(" ")[2])
    elif line[0] == "2":
        if line[2] == "A":
            print(A)
        else:
            print(B)
    elif line[0] == "3":
        if line[2] == "A" and line[4] == "B":
            A = A + B
        elif line[2] == "A" and line[4] == "A":
            A = A + A
        elif line[2] == "B" and line[4] == "B":
            B = B + B
        else:
            B = A + B
    elif line[0] == "4":
        if line[2] == "A" and line[4] == "B":
            A = A*B
        elif line[2] == "A" and line[4] == "A":
            A = A*A
        elif line[2] == "B" and line[4] == "B":
            B = B*B
        else:
            B = A*B
    elif line[0] == "5":
        if line[2] == "A" and line[4] == "B":
            A = A - B
        elif line[2] == "A" and line[4] == "A":
            A = 0
        elif line[2] == "B" and line[4] == "B":
            B = 0
        else:
            B = B - A
    else:
        if line[2] == "A" and line[4] == "B":
            A = int(A/B)
        elif line[2] == "A" and line[4] == "A":
            A = 1
        elif line[2] == "B" and line[4] == "B":
            B = 1
        else:
            B = int(B/A)
