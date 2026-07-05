# Confirmed to be fine
numbers = []
for x in range(4):
    numbers.append(int(input()))

if numbers[0] < numbers[1] < numbers[2] < numbers[3]:
    print("Fish Rising")
elif numbers[0] > numbers[1] > numbers[2] > numbers[3]:
    print("Fish Diving")
elif numbers[0] == numbers[1] == numbers[2] == numbers[3]:
    print("Fish At Constant Depth")
else:
    print("No Fish") 



