//If n is odd, only the first direction will cover it (top left -> right, shown as # in the graph), because the other three direction all start from the next position( +1 or -1).

/**
	 * -> -> ->
	 * ^      |
	 * |      |
	 * <- <-- V
	 * 
	 * # # # #
	 * %     $
	 * %     $
	 * & & & $
	 *     
	 */
	 
/*First, four variables containing the indices for the corner points of the array are initialized.
The algorithm starts from the top left corner of the array, and traverses the first row from left to right. 
Once it traverses the whole row it does not need to revisit it, thus, it increments the top corner index.
Once complete, it traverses the rightmost column top to bottom. Again, once this completes,
there is no need to revisit the rightmost column, thus, it decrements the right corner index.
Next, the algorithm traverses the bottommost row and decrements the bottom corner index afterward.
Lastly, the algorithm traverses the leftmost column, incrementing the left corner index once it’s done.
This continues until the left index is greater than the right index, and the top index is greater than the bottom index.

*/
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
