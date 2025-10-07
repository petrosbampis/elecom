import numpy as np

a = np.random.randint(11, size = (24))
print ("-------array a-------")
print(a)
reshsaped_a = a.reshape(4,6)
print ("-------reshsaped_a-------")
print (reshsaped_a)
reshsaped_b = a.reshape(2,12)
print ("-------reshsaped_b-------")
print (reshsaped_b)

s = reshsaped_a.sum(axis = 1)
print ("-------reshsaped a sum (lines)-------")
print (s)

m = reshsaped_a.argmax(axis = 0)
print ("-------reshsaped a index of max (columns)-------")
print (m)

