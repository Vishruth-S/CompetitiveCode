import math  # To use ceil function

b, a = map(int, input().split())  # To take input

h = (2*a)/(b)  # Getting height

if h > int(h):
    print(math.ceil(h))

else:
    print("%.0f" % h)
