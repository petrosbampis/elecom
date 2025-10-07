import numpy as np
a = np.random.random([3,4])
b = np.random.random([3,4])

print ("-------array a-------")
print (a)
print ("-------array b-------")
print (b) 
print ("-------Sum a+b-------")
print (a+b)
print ("-------Multiplication a*b-------")
print (a*b)
print("-------Avg value of each column-------")
mean = (a.sum(axis=0))/3
print(mean)
