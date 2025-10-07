import numpy as np
a = np.random.random([3,4])
b = np.random.random([3,4])

print ("-------array a-------")
print (a)
print ("-------array b-------")
print (b)

print ("-------array a and b joint vertically-------")
v = np.vstack([a,b])
print (v)

print ("-------array a and b joint horizontally-------")
h = np.hstack([a,b])
print (h)

print ("-------array v splitted vertically-------")
v = np.vsplit(v, 2)
print (v)
