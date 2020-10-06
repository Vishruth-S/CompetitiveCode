import sys

def countApplesAndOranges(s, t, a, b, m, n, apples, oranges):
    q,w=0,0
    
    for i in range(m):
        x=apples[i]+a                     #The distance of the apple tree is added to get the exact position of each apple in the number line
        if x>=s and x<=t:                 #checking if the apple would fall on the house
            q=q+1

    for i in range(n):
        x=oranges[i]+b                    #The distance of the orange tree is added to get the exact position of each orange in the number line
        if x<=t and x>=s:                 #checking if the orange would fall on the house
            w=w+1
            
    print(q)
    print(w)

if __name__ == '__main__':
    st = input().split()

    s = int(st[0])

    t = int(st[1])

    ab = input().split()

    a = int(ab[0])

    b = int(ab[1])

    mn = input().split()

    m = int(mn[0])

    n = int(mn[1])

    apples = list(map(int, input().rstrip().split()))

    oranges = list(map(int, input().rstrip().split()))

    countApplesAndOranges(s, t, a, b, m, n, apples, oranges)