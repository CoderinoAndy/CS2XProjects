variables = {
    "A": 0,
    "B": 0
}

while True:
    instruction = input().split()
    command = int(instruction[0])

    if command == 7:
        break

    x = instruction[1]

    if command == 1:
        variables[x] = int(instruction[2])

    elif command == 2:
        print(variables[x])

    else:
        y = instruction[2]

        if command == 3:
            variables[x] += variables[y]

        elif command == 4:
            variables[x] *= variables[y]

        elif command == 5:
            variables[x] -= variables[y]

        elif command == 6:
            variables[x] = int(variables[x] / variables[y])