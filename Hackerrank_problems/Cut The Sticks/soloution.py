def calc(l,n):
    z=[]
    q=[n] # initially all sticks are present
    while(len(l) > 0):
        for i in l:
            if(i-min(l)>0):#append all sticks greter than minimum in arr
                z.append(i-min(l))

        q.append(len(z)) #len(z) = number of visible sticks
        l=z #l gets updated with z as sticks are being removed
        z=[]
    return q
n=int(input()) #no of sticks
l= [int(x) for x in input().split()]
for i in calc(l,n):
    if(i!=0):
       print(i)
