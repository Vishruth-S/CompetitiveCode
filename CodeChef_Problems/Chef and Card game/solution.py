for _ in range(int(input())):
    n = int(input())
    a,b = [],[]
    chef,morty = 0,0

    for _ in range(n):
        c,m = map(int,input().split())
        def getSum(num):
            s = 0
            while num>0:
                s += int(num%10)
                num = int(num/10)
            return s
        a.append(getSum(c))
        b.append(getSum(m))
    
    for x,y in zip(a,b):
        if x>y:
            chef += 1
        elif x==y:
            chef += 1
            morty += 1
        else:
            morty += 1
    
    if chef>morty:
        print(0, chef)
    elif morty>chef:
        print(1, morty)
    else:
        print(2, chef)