import math

def is_prime(n):
    for i in range(2, int(n**0.5)+1):
        if n % i == 0:
            return False
    return True

def all_primes(a):
    return all(is_prime(num) for num in a)

print(all_primes([0, 3, 4, 7, 9]))   
print(all_primes([3, 5, 7, 13]))     
print(all_primes([1, 5, 3]))        
