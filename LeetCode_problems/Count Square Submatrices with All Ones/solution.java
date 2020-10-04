class Solution {
    public int countSquares(int[][] matrix) {
        int i=0,j=0,k=0,m=0,n=0,sm=0;
        m=matrix.length;
        n=matrix[0].length;
        int h=Math.min(m,n);
        int[][] ans=new int[m+1][n+1];
        for(i=1;i<=m;i++){
            for(j=1;j<=n;j++){
                if(matrix[i-1][j-1]!=0){
                    sm+=(ans[i][j]=Math.min(Math.min(ans[i-1][j],ans[i][j-1]),ans[i-1][j-1])+1);
                    
                }
            }
        }
        
        return sm;
    }
}
