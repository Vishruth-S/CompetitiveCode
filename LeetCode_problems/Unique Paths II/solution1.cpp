class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        
        vector<vector<int>> dp(obstacleGrid.size(),vector<int>(obstacleGrid[0].size(),0));  // empty grid for memoization
        int flag1=0;
        int flag2=0;
        
        for(int i=0;i<dp.size();i++){   //examining first column
            if(obstacleGrid[i][0]!=1 && flag1==0){
                dp[i][0]=1; //cells in the starting column can be visited only by one way
            }
            else{
                dp[i][0]=0; //since there is an obstacle in the way, we cannot reach this point
                flag1=1;    //set flag value since we cannot access any further points past the obstacle
            }
        }
        for(int i=0;i<dp[0].size();i++){    //examining first row
            if(obstacleGrid[0][i]!=1 && flag2==0){
                dp[0][i]=1; //cells in the starting row can be visited only by one way
            }
            else{
                dp[0][i]=0; //since there is an obstacle in the way, we cannot reach this point
                flag2=1;    //set flag value since we cannot access any further points past the obstacle
            }
        }
        if(dp[0][0]==0){    // if obstacle is placed at the starting point
            return 0;
        }
        
        for(int i=1;i<dp.size();i++){
            for(int j=1;j<dp[0].size();j++){
                if(obstacleGrid[i][j]==1){
                    dp[i][j]=0;        // since it is an obstacle, it cannot be reached
                }
                else{
                    dp[i][j]=dp[i-1][j]+dp[i][j-1]; // no. of ways of reaching current cell= no. of ways of reaching the cell above+number of ways of reaching left cell
                }
            }
        }
        
        return dp[obstacleGrid.size()-1][obstacleGrid[0].size()-1];
    }
};
