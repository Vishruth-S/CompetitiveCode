# Taking input for Test Cases
for _ in range(int(input())):
    
    # Taking input for n. It is the number of moves
    n = int(input())
    
    # Creating Two empty List for trak of points of chef and morty
    a,b = [],[]
    
    # Declaring both variable at 0 values
    chef,morty = 0,0
    
    # The Game loop which runs for N number of times
    for _ in range(n):
        
        # c,m are the input for the number on each of the card of chef and morty
        c,m = map(int,input().split())
        
        # Function that finds the sum of integers of both c,m
        def getSum(num):
            s = 0
            while num>0:
                s += int(num%10)
                num = int(num/10)
            return s
        
        # appending the sum of integers of c,m to the respective lists
        a.append(getSum(c))
        b.append(getSum(m))
    
    # for loop for scroing points
    # x represents the points for chef
    # y represents the points of morty
    for x,y in zip(a,b):
        
        # chef gets points 
        if x>y:
            chef += 1
        
        # morty gets points
        elif x==y:
            chef += 1
            morty += 1
        # draw condition, both gets 1 points each
        else:
            morty += 1
    
    # wins conditions
    # prints 0 and value of 'chef' variable if chef wins
    if chef>morty:
        print(0, chef)
    
    # prints 1 and value of 'morty' variable if morty wins 
    elif morty>chef:
        print(1, morty)
    
    # prints 2 and value of 'chef' variable if match draws
    else:
        print(2, chef)
