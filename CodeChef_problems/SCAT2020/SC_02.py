# cook your dish here
#PROBLEM : https://www.codechef.com/SCAT2020/problems/SC_02
a = int(input())
for i in range(a):
    n = int(input())
    b = list(map(int,input().split()))
    g = list(map(int,input().split()))
    b.sort()
    g.sort()
    h1 =[]
    h2= []
    for i in range(n):
        h1.append(b[i])
        h1.append(g[i])
    for i in range(n):
        h2.append(g[i])
        h2.append(b[i])
    if h1 == sorted(h1) or h2 ==  sorted(h2):
        print("YES")
    else:
        print("NO")
