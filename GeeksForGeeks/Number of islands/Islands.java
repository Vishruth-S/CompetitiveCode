class Islands {

    // Function to find the number of island in the given list A
    // N, M: size of list row and column respectively
    static int findIslands(ArrayList<ArrayList<Integer>> A, int N, int M) {
   // we will use dfs  to traverse graph 
        // Your code here
        int count=0;
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                if(A.get(i).get(j)==1){
                    count++;
                    dfsUtil(A,i,j);
                }
            }
        }
        return count;
    }
    
    static void dfsUtil(ArrayList<ArrayList<Integer>> A, int i, int j){
        if(i<0 || i>=A.size() || j<0 || j>=A.get(i).size() || A.get(i).get(j)==0) // these are the base condiation 
            return ;
        //we will try to cover all direction   
        //we use the base condition in any DFS opertion i or j valuw will be negative so it is not possible so we will 
        //-return nothing  
        A.get(i).set(j,0);
        dfsUtil(A,i+1,j);
        dfsUtil(A,i-1,j);
        dfsUtil(A,i,j+1);
        dfsUtil(A,i,j-1);
        dfsUtil(A,i+1,j-1);
        dfsUtil(A,i+1,j+1);
        dfsUtil(A,i-1,j-1);
        dfsUtil(A,i-1,j+1);
    }
}