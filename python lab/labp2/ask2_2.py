def mkd(a,b):
    while b !=0:
        (a,b) = (b, a%b)
    return (a)

a = int(input("Enter value of a: "))
b = int(input("Enter value of b: "))
print(mkd(a, b))


    