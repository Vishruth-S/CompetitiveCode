/*
We have to make sure that Jerry wins. It is mentioned that Jerry can only win if
If TS is odd and JS is even, Jerry wins the game.

Until Jerry wins  we have to make sure that the game goes on. The condition for the game to proceed is
If both TS and JS are even, their values get divided by 2 and the game proceeds with the next turn.

We are only given the TS value as input for each testcase.

To solve this problem, consider the bit representation of the TS number. Say TS = 11 (Eleven) then its bit representation would be 
TS = 1011 (in binary)

Find k such that pow(2,k) is the highest power that divides TS then JS must have atleast a factor of pow(2,k+1).
Find pow(2,k)  such that k is the highest power of 2 which divides TS. Divide TS by pow(2,k+1) and take the floor. Let that be z. z is the number of possible values of JS.

*/
#include <bits/stdc++.h>
using namespace std;
#define sync                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int

void solve()
{
    ll n;
    cin >> n;
    ll temp = n;
    ll k = 0;
    while (temp % 2 == 0)
    {
        temp = temp >> 1;
        k++;
    }
    ll ans = (1ll << (k + 1));
    ans = n / ans;
    cout << ans << '\n';
}

int main()
{
    sync;
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        solve();
    }

    return 0;
}