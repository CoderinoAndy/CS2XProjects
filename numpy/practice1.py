import numpy as np
A = np.array([
    [2, 1],
    [-1, 3]
])

x = np.array([4, 2])

result = A @ x
print(result)

# lets do some more points now.

vectors = [
    np.array([0, 1]),
    np.array([1, 0]),
    np.array([2, 3]),
    np.array([-2, 30]),
]

for vector in vectors:
    print(f"{vector} -> {A @ vector}")