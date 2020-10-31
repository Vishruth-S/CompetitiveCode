
n = int(input()) # no. of vectors
sumx = 0
sumy =0
sumz = 0

# take coordinates of vector and add it to the 
# sum of respective coordinate
for i in range(n):
    x,y,z = map(int, input().split())
    sumx += x
    sumy += y
    sumz += z


if sumx == 0 and sumy == 0 and sumz == 0 :
    print("YES") # A body is at equilibrium if sum of all vectors is zero 
else:
    print("NO")
