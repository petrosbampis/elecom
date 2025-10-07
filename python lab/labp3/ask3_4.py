import numpy as np

a = np.random.rand(10, 10)

greater_than = a[a > 0.8]
mean_greater_than = greater_than.mean()
coords = np.argwhere(a > 0.955)

print("-------Array a:-------", a)
print("-------Elements > 0.8:-------", greater_than)
print("-------Avg of elements > 0.8:-------", mean_greater_than)
print("-------Coordinations of elements > 0.955:-------", coords)


