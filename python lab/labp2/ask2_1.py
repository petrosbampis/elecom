def factorial(n):
    x = 1;
    if n==0:
        x = 1
    for i in range(1,n+1):
        x = x*i    
    print("n! = ", x)

n = int(input("Enter value of n: "))
factorial(n)
    