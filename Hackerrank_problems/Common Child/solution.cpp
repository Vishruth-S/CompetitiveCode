#include <bits/stdc++.h>

using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    // for faster input and output
    fastio 
    string s1,s2;
    // inputing the strings
    cin>>s1;
    cin>>s2;
    int n = s1.size();
    int m = s2.size();
    /* Initialization of DP array. Here dp[i][j] is the length of the comman substring that
        can be made considering substring s1(..i) and s2(..j) where s(..i) is the substring 
        considering string from starting to index i.
        Thus we have our recurrence relation based on two cases-
        1) if s1[i] == s2[j] (here we take the comman character and increment the comman string by 1)
        2) id s1[i]!= s2[j], then we take the maximum if we take we skip i-th character of s1, or 
            j-th character of s2 thus having the recurrences as follows.
        dp[i][j] = 1+dp[i-1][j-1] given s1[i] == s2 [j]
        dp[i][j] = max(dp[i-1][j], dp[i][j-1]) given s1[i] != s2[j]
    */
    int** dp = new int* [n+1];
    for(int i=0;i<=n;i++)
    {
        dp[i] = new int[m+1]();
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            // Case-1
            if(s1[i] == s2[j])
            {
                dp[i+1][j+1] = 1 + dp[i][j];
            }
            //Case-2
            else{
                dp[i+1][j+1] = max(dp[i+1][j],dp[i][j+1]);
            }
        }
    }
    // at the end the result is stored in dp[n][m] (considering whole strings as per our dp logic)
    cout<< dp[n][m] << endl;
    return 0;
}