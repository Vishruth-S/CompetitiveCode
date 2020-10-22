
n = int(input().strip())
p = int(input().strip())
if p <= n:
    print(min(p // 2, n // 2 - p // 2))


# working
# the minimum numbers of pages to turn can be achieved either moving pages from the front or from the back
# either way pages will increment or decrement in progression of 2
# therefore minimum to any page will be , if starting from the front side (p // 2)

# you can calculate the number of pages from the back side too using the same logic
# but a faster way is to subtract (p // 2) from total number of pages

# the answer to the problem therefore is min between both values you get [front and back]