t = int(input())
for i in range(t):
    n = int(input())
    li = list(map(int, input().split()))
    li.sort()
    if n==1:
        c = n       
    else:
        c = len(set(li))    
    if li[0] == 0:
        c-=1        
    print(c)
        