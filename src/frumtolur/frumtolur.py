i, primes = 3, [2]
print(2)

while len(primes) < 100:
    if all(i % prime != 0 for prime in primes):
        primes.append(i)
        print(i)
    i += 2