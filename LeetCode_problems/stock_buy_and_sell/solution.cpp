class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int dp[n];
        dp[0]=0;
        for(int i=1;i<n;i++){
            dp[i]=dp[i-1]+max(prices[i]-prices[i-1],0);
        }
        return dp[n-1];
        
    }
};