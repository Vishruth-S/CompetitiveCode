a, b = map(int, input().split())

# Find sum of digits of a number
def sumDigits(n):
    tot = 0
    while(n > 0):
        tot += n % 10
        n //= 10
    return tot

# Recursively find sum of digits till the number is single digit
def sumOfDigits(n):
    k = sumDigits(n)
    if k > 9:
        return sumOfDigits(k)
    else:
        return k


num = sumDigits(a) * b
print(sumOfDigits(num))
