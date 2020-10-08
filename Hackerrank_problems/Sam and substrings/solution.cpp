#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

/* -------- PROBLEM LOGIC --------
    The problem can be looked to be solved using dynamic programming, let us
    take the test-case "123". Now,
    We define our dp states as dp[i] = sum of all distinct subsets made using s[i] and other 
    characters from s[0..i-1] (taking some or all at a time) so dp[0] = 1 ( since only 1 can be formed).
    Similarly dp[1] =  12 + 2 = 14, 
    dp[2] = 123 + 23 + 3 = 149,
    On clearful inspection we can calculate dp[i] state if we have pre-calculated dp[i-1] state
    As dp[2] = 123 + 23 + 3 = 120 + 20 + 3 + 3 + 3 = (12 + 2)*10 + 3*3 = dp[1]*10 + 3*(3)
    and similarly we have dp[1] = 12 + 2 = 10 + 2 + 2 = 1*10 + 2*2 = dp[0]*10 + 2*2
    Hence we arrive at the following recurrence - 
    dp[i] = dp[i-1]*10 + s[i]*(i+1) 
    Note you can clearly see the logic of adding s[i] (i+1) times, since it will appear (i+1) times in the dp sum.
    The answer will be hence the sum of all dp[i] states from 0 to n-1
*/

int main()
{
   fastio // faster I/O
   // take input as a string due to contraints
   string s;
   cin>>s;
   int n = s.size();
   // initializing dp states
   ll* dp =new ll[n];
   // initializing dp[0] as the first digit
   dp[0]=int(s[0]-'0');
   for(int i=1;i<n;i++)
   {
       int key = int(s[i]-'0');
       // recurrence step
       dp[i]= dp[i-1]*10 + key*(i+1);
       dp[i]%=mod;
   }
   ll sum=0;
   // summing dp[i] states from 0 to n-1
   for(int i=0;i<n;i++)
   {
       sum+=dp[i];
       sum%=mod;
   }
   // print answer
   cout<<sum<<endl;
}

