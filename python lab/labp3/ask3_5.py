import numpy as np

b = np.random.randint(0, 101, size=(6, 6))
print("-------array b-------", b)

new_b = b.copy()
new_b[b < 50] = -1

new_b[b >= 90] = 999

print("-------new array-------", new_b)
