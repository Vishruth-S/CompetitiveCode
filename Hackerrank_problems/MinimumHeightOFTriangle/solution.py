import math
b, a = map(int, input().split())
h = (2*a)/(b)
if h > int(h):
    print(math.ceil(h))
else:
    print("%.0f" % h)
