import math

# This solution aims to try every numbers until we detect 10001 prime numbers


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


# `count` starts to 1 because we already know that 2 is prime
# but it will not be computed in this loop as we skip all even numbers
if __name__ == "__main__":
    limit = 10001
    count = 1
    nb = 1

    while count < limit:
        if isPrime(nb):
            count += 1
            result = nb
        nb += 2

    print(result)
