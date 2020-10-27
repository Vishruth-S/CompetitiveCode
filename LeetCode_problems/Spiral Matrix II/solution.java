class Solution {
    public int[][] generateMatrix(int n) {
        int[][] ans=new int[n][n];
        int fr=0,lr=n-1,fc=0,lc=n-1;
        int val=1;
        while(fr<=lr && fc<=lc)
        {
            
            for(int i=fc;i<=lc;i++)
            {
                ans[fr][i]=val++;
            }
            fr++;
            if(fr>lr) break;
            
            for(int i=fr;i<=lr;i++)
            {
                ans[i][lc]=val++;
            }
            lc--;
            if(lc<fc) break;
            
            for(int i=lc;i>=fc;i--)
            {
                ans[lr][i]=val++;
            }
            lr--;
            if(lr<fr) break;
            
            for(int i=lr;i>=fr;i--)
            {
                ans[i][fc]=val++;
            }
            fc++;
        }
        return ans;
    }
}
