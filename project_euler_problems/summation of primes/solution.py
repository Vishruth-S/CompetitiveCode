import math

# This solution aims to try every numbers
# and add primes to the sum when we encountered


def isEven(nb):
    return nb % 2 == 0


# A prime number is a number that can only be divisible by 1 or itself
# Facts about prime numbers:
# - 1 is not a prime.
# - All primes except 2 are odd.
def isPrime(nb):
    if nb == 1:
        return False
    elif nb == 2 or nb == 3:
        return True
    elif isEven(nb):
        return False

    # square root of `nb` rounded to the greatest integer `root` so that:
    # root * root <= nb
    root = math.ceil(math.sqrt(nb))

    for f in range(3, root + 1, 2):
        if nb % f == 0:
            return False
    return True


# sum start at 2 because 2 is prime and we will not compute this value
# in the loop
if __name__ == "__main__":
    limit = 2000000
    sum = 2

    for nb in range(1, limit, 2):
        if isPrime(nb):
            sum += nb

    print(sum)
