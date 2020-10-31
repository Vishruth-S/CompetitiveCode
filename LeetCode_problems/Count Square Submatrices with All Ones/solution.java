class Solution {
    public int countSquares(int[][] matrix) {
        int i=0,j=0,k=0,m=0,n=0,sm=0;
        m=matrix.length;
        n=matrix[0].length;
        int h=Math.min(m,n);
        int[][] ans=new int[m+1][n+1];
        //using Dynamic Programming to solve this problem, thus need storage matrix
        for(i=1;i<=m;i++){
            for(j=1;j<=n;j++){
                if(matrix[i-1][j-1]!=0){ //if the cell contains 1
                    sm+=(ans[i][j]=Math.min(Math.min(ans[i-1][j],ans[i][j-1]),ans[i-1][j-1])+1);
                    //in the ans matrix, put the minimum of its i-1 (previous row) and j (same column ) or i(same row)
                    //and j-1(prev column) or minimum of that against min of i-1 (prev row) and j-1 (prev column) 
                    //one since this is additional case of 1 has to be added
                }
            }
        }
        
        return sm;
    }
}
