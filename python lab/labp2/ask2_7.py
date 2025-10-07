def SieveOfEratosthenes(n):
    primes = []
    is_prime = [True] * (n + 1)
    is_prime[0] = is_prime[1] = False  

    for number in range(2, int(n ** 0.5)+1):
        if is_prime[number]:
            for multiple in range(number * number, n+1, number):
                is_prime[multiple] = False


    for number in range(2, n+1):
        if is_prime[number]:
            primes.append(number)

    return primes

prime_numbers = SieveOfEratosthenes(120)
print("Prime numbrs from 2 to 120:")
print(prime_numbers)
