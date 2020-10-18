from collections import defaultdict
from collections import deque


#the solution is simple find the brige edges in the graph first 
#find a path form a to b and check for the bridge edges in the and count them.


#class for finding bridge edges
class Graph:

    #basic structure of graph
    def __init__(self,vertices):
        self.V = vertices
        self.graph = defaultdict(list)
        self.Time = 0
        self.ans = []

    #to add a edge
    def addEdge(self,u,v):
        self.graph[u].append(v)
        self.graph[v].append(u)
    
    #helper function for finding bridge edges
    def bridgeUtil(self,u,visited,parent,low,disc):

        visited[u] = True
        disc[u] = self.Time
        low[u] = self.Time
        self.Time +=1

        for v in self.graph[u]:

            if visited[v] == False:
                parent[v] = u
                self.bridgeUtil(v,visited,parent,low,disc)

                low[u] = min(low[u],low[v])

                if(low[v]>disc[u]):
                    #finally found the bridge edge
                    self.ans.append([u,v])
                    #print(u,v)

            elif v!=parent[u]:
                low[u] = min(low[u],disc[v])
 
    #function to call helper function with  initial inputs
    def bridge(self):

        visited = [False] * (self.V)
        disc = [float("Inf")] * (self.V)
        low = [float("Inf")] * (self.V)
        parent = [-1] * (self.V)

        for i in range(self.V):
            if visited[i] == False:
                self.bridgeUtil(i,visited,parent,low,disc)

    #path function returns parent array 
    #this function uses dfs for finding the path
    #parent arr means for given edge V -- > u in arr[u] = v

    def path(self,x,y):
        q = deque()
        visited = [False] * (self.V)
        q.append(x)
        parent = [-1] * (self.V)
        while(len(q)>0):
            u = q.popleft()
            for v in self.graph[u]:
                if(v == y):
                    visited[v] = True
                    parent[v] = u
                    return parent
                if(visited[v] == False):
                    q.append(v)
                    visited[v] = True
                    parent[v] = u



if __name__ == '__main__':
    n,m = map(int,input().split())
    a,b = map(int,input().split())
    g1 = Graph(n)
    count = 0
    for i in range(m):
        x,y = map(int,input().split())
        g1.addEdge(x-1, y-1)
    g1.bridge()
    p = g1.path(a-1,b-1)
    pa  =  []
    u = b-1
    
    #checking for the bridge edegs in the path 
    while(u != a-1):
        pa.append([u,p[u]])
        pa.append([p[u],u])
        u = p[u]

    for i in g1.ans:
        if(i in pa):
            count = count + 1
    print(count)
