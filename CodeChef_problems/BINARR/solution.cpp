//author - Nihal Mittal
//codechef handle - https://www.codechef.com/users/nihal_47

//LOGIC

/**This problem requires us to find the minimum length subarray with sum atleast s and length
   greater than k

   We will use a well known technique called 2-pointer to solve this problem. We will take 
   leftmost pointer and rightmost pointer. When sum becomes greater than s at any point we 
   will increment the leftmost pointer and then update the answer if the length of the subarray
   is greater than k.
 **/

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, k, s, i, j = 0, sum = 0, ans = LLONG_MAX;
    // Taking input
    cin >> n >> k >> s;
    ll a[n + 2];
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
    {
        sum += a[i];
        //If sum remains still greater than s after subtracting the leftmost element increment
        //the pointer by 1
        while (sum - a[j] > s and (i - j) > k and j < i)
        {
            sum -= a[j];
            j++;
        }
        //If all the conditions are valid update the answer
        if (sum > s and (i - j + 1) > k)
            ans = min(ans, (i - j + 1));
    }
    //If there is no such subarray make the answer as -1
    if (ans == LLONG_MAX)
        ans = -1;
    //printing the output
    cout << ans;
}