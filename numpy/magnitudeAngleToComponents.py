import numpy as np;

magnitude = 10;
angle = 30;

angle_radians = np.radians(angle)

x = magnitude*np.cos(angle_radians)
y = magnitude*np.sin(angle_radians)

vector = np.array([x, y])
print(vector);