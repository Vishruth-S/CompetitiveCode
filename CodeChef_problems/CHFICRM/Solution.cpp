/*
The idea is very simple.
Since there are 3 denominations in total, we maintain a count of coins that the chef has at each instance.
Since the 15 rupees coin can never be used as return change, maintaining its count is optional as it serves no purpose.

At each instance, check the value of the current coin received.
1. If it is a Rs. 5 coin, simply increment the 'five' count and move on as no change needs to be returned.
2. If it is a Rs. 10 coin, we must return a Rs. 5 coin. Check if we have a Rs. 5 coin. 
2.1 If not , then the chef fails to serve all customer. Mark your answer as false. 
2.2 Else increment the 'ten' count and decrement 'five' count
3. If it is a Rs. 15 coin, we must return a Rs. 10 change. 
3.1 We prefer to use a Rs. 10 coin for this if we have one as the Rs 5 coins are being used in Case 2 as well. Check for Rs. 10 coin. If it is there, use it. 
3.2 Else check if we have 2 Rs. 5 coins. If we do, use those. 
3.3 If neither of the above, mark answer as false.

Return the final answer thus obtained.
*/
#include <bits/stdc++.h>
using namespace std;

#define sync                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int

bool solve()
{
    ll n;
    cin >> n;

    ll five = 0;
    ll ten = 0;
    ll x;

    bool ans = true;

    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        if (x == 5)
        {
            five++;
        }
        else if (x == 10)
        {
            if (five <= 0)
                ans = false;
            five--;
            ten++;
        }
        else if (x == 15)
        {
            if (ten > 0)
                ten--;
            else if (five >= 2)
                five -= 2;
            else
            {
                ans = false;
            }
        }
    }

    return ans;
}

int main()
{
    sync;
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        bool ans = solve();
        if (ans)
            cout << "YES\n";
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}