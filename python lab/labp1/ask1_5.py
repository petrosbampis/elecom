s1 = input("Type string 1: ")
s2 = input("Type string 2: ")

sa = s1[0:int((len(s1))/2)]
sb = s1[int((len(s1))/2)::]

s_result = sa+s2+sb
print(s_result)
