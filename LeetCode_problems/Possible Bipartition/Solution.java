class Solution {
    public boolean possibleBipartition(int N, int[][] dislikes) {
        int i=0,a=0,b=0;
        List<Integer>[] graph=new List[N]; // create adjacancy list
        for(i=0; i < N; i++){
            graph[i]=new ArrayList<>();
        }
        for(int[] d:dislikes) {
            a=d[0]-1;
            b=d[1]-1;
            graph[a].add(b);  //add who dislikes who as edges in graph
            graph[b].add(a);
        }
        int[] groupMap = new int[N]; // store partition here
        Arrays.fill(groupMap,-1);
        for(i=0;i<N;i++)
            if (groupMap[i]==-1 && !dfs(graph,i,0,groupMap))
                return false; // if dfs is false(cant be in same grp) and groupmap is -1, ret false 
        return true;
    }
    boolean dfs(List<Integer>[] graph, int src, int group, int[] groupMap) { // recursive depth first search logic 
        if (groupMap[src]==1-group) 
            return false; 
        if (groupMap[src]==group) 
            return true; 
        groupMap[src]=group; 
        for (int v : graph[src])
            if (!dfs(graph,v,1-group,groupMap))
                return false;
        return true;
    }
}