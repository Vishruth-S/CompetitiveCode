x=input("").split(' ')
first=int(x[0])
second=int(x[1])
r=int(x[2])
r-=2
for g in range(r):
    z=first
    zz=second
    second=zz*zz+z
    first=zz
print(second)