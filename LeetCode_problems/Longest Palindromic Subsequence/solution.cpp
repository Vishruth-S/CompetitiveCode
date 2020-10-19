class Solution {
public:
    
    int dp[1010][1010];
    
    int func(string& s1,int l1,string& s2,int l2,int i1,int i2)
    {
        if(i1>=l1 || i2>=l2){
            return 0;
        }
        if(dp[i1][i2] != -1){
            return dp[i1][i2];
        }
        if(s1[i1]==s2[i2])
        {
            return 1+func(s1,l1,s2,l2,i1+1,i2+1);
        }
        int a1 = func(s1,l1,s2,l2,i1,i2+1);
        int a2 = func(s1,l1,s2,l2,i1+1,i2);
        return dp[i1][i2] = max(a1,a2);
    }
    int lcs(string s1,string s2)
    {
        int l1=s1.size(),l2=s2.size();
        memset(dp,-1,sizeof(dp));
        return func(s1,l1,s2,l2,0,0);
    }
    int longestPalindromeSubseq(string s) {
        
        return lcs(s,string(s.rbegin(),s.rend()));
        
    }
};
