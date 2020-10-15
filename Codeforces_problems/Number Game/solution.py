import math
def is_prime(n):
    for i in range(2,int(math.sqrt(n)) +1):
        if n%i == 0:
            return False
    return True


for _ in range(int(input())):
    n = int(input())
    if n == 1 :
        # since for n = 1 Ashishgup cannot make a move
        print("FastestFinger")
    elif (n > 2 and n%2 ==0):
        if (n & (n-1)) == 0:
        # when n is power of 2 it has no odd divisor so Ashishgup looses
            print("FastestFinger")
        elif (n%4 != 0 and is_prime(n//2)):
        # here n is of the form n = 2.x where x is odd
        # if x is prime Ashishgup looses if he divides by only odd divisor x or subtracts 1
            print("FastestFinger")
        else:
        # otherwise x is of the form x = x1.x2 where x1 is prime and Ashishgup can win by
        # dividing x by x2
            print("Ashishgup")
    else:
        # for odd n and for n=2 Ashishgup can divide n by itself or 
        # subtract 1 respectively
        print("Ashishgup")