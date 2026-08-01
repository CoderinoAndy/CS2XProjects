import numpy as np

vector = np.array([2, 3])
magnitude = np.linalg.norm(vector)

Radiantheta = np.arctan2(vector[1], vector[0])
Degreetheta = np.degrees(Radiantheta)

print(f"Theta in radians: {Radiantheta}")
print(f"Theta in degrees: {Degreetheta}")
print(f"magnitude: {magnitude}")