# Taking inputs
n = int(input())
m = int(input())

# Finding the smallest and largest numbers out of the two inputs
smaller = min(n, m)
larger = max(n, m)

# Effectively, if the smaller number is less than 10 then we should iterate from 1 to the smallest number. We must also check whether or not the second number is greater than that number. 
# However, if the smaller number is greater than 10, then by default we should iterate from 1 to 9. Not including 10 because that is not a plausible combination. 
counter = 0
if smaller < 10:
    for x in range(1, smaller + 1):
        counterpart = 10 - x
        if larger >= counterpart:
            counter += 1
else:
    counter = 9

# Output sequence
if counter == 1:
    print("There is 1 way to get the sum 10.")
else:
    print(f"There are {counter} ways to get the sum 10.")