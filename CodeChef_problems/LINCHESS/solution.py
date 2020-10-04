'''
-----------------LOGIC-----------------------
In order to get minimum steps, we need to check among all possible steps that can capture chefs.
As it is given that pawns move forward, our search space reduces to those people whose pawns are initially to the left of the pawn of the chef.

For every person, the amount of forwarding steps at a time of its pawn is equal to its initial position hence 
we can say that if a chef’s pawn modulus people’s pawn position is equal to zero, then only that pawn can capture the chef.

In that situation by calculating no. of times that pawn has to move forward, the minimum of all will be the required answer.
'''


# cook your dish here
try:
    t=int(input())
    while t:
        t-=1
        
        # n -> represents number of players.
        # k -> initial position of pawn.
        n,k=map(int,input().split())
        
        # list of players
        p=list(map(int,input().split()))
        min1=-1
        val=-1
        for i in range(n):
            if(k%p[i]==0):
                temp=k//p[i]
                if(temp<min1 or min1<0):
                    min1=temp
                    val=p[i]
                    
        #Player who can capture Chef's pawn.
        print(val)
                
except Exception:
    pass
