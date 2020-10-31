import math
k = int(input())

#The Solution for this problem is simple 
#consider the following edges 1--> 2 , 1-->3, 2 -->4, 3-->4, these edges create a square and this graph has 2 ways 
# and if we add these edges 4-->5 , 4--> 6, 5-->7 , 6-->7 no of ways is doubled
#i.e adding three edges we can double the no of ways i.e (no of paths = 2 ^ no of three edges)

#root and end nodes
nodes = 2
#one edge is mandatory
edges = 1 
 
 
i = 1 
s = []
#calculating the no of nodes possible for given ways i.e(2^x + y = k)
x = int(math.log(k,2))
nodes = nodes + x
#No of the ways with x nodes
ways = 1 << (x)
i = i + x
#no of remains ways to be connected
k = k - ways + 1
edges =  int(edges + (x*(x-1)/2)) + 2*x
 
#similarly calculating all the possible x value until it reaches one 
while(k>1):
    k = k - 1
    nodes = nodes + 1
    if(k<=1):
        edges =  edges + 2
        break
    x = int(math.log(k,2))
    ways = 1 << (x)
    s.append(x)
    k = k - ways + 1
    edges =  edges + 3
    
#connect the nodes to the main graph just by two edges such a way that the no ways are covered
#printing all the edges of main graph 
print(""+str(nodes)+" "+str(edges))
print("1 "+str(nodes))
for j in range(2,i+1):
    print("1 "+str(j))
    print(""+str(j)+" "+str(nodes))
    for z in range(j+1,i+1):
        print(""+str(j)+" "+str(z))
temp = i

# printing the connections inorder to reach the no of ways
for j  in s:
    i = i + 1
    print("1 "+str(i))
    print(""+str(i)+" "+str(nodes))
    print(""+str(i)+" "+str(temp-j+1))
    
#checking the edge case 
if(i< nodes):
    for j in range(i+1,nodes):
        print("1 "+str(j))
        print(""+str(j)+" "+str(nodes))
