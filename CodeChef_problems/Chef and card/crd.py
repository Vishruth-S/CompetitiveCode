t = int(input())
// use map function 

for i in range(t):
    a= int(input())
    p,q=0,0
    for j in range (a):
        r,m=map(str, input().split())
        a,b = 0,0
        for i in range(len(r)):
            a+=int(r[i])
        for i in range(len(m)):
            b += int(m[i])
        if a==b:
            p += 1 
            q += 1 
        elif a>b:
            p +=1 
        elif a<b: 
            q += 1 
    if p>q:
        print(0,p)
    elif p<q:
        print(1,q)
    elif q==p:
        print(2,q)
