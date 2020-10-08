/*
Simply start from top lefet and start assigning odd and even numbers alternatively as you go on.

The rows alternate for the beginning element i.e. the first element of first row is odd and first element of second row is even and so on ...

Also ,we alternate the odd-even occurrence after each element. 

However this second alteration could end up ruining the row alteration in case of even N. 
Hence when N is even, we have to do another row alteration after each row.

Once done creating this alternate odd-even matrix , simply print it.
*/
#include <bits/stdc++.h>
using namespace std;

#define sync                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

#define ll long long int
#define vi vector<ll>

void solve()
{
    ll n;
    cin >> n;
    vector<vi> v(n, vi(n));
    ll odd = 1;
    ll even = 2;
    bool flag = 1;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (flag)
            {
                v[i][j] = odd;
                odd += 2;
            }
            else
            {
                v[i][j] = even;
                even += 2;
            }
            flag = !flag;
        }
        if (n % 2 == 0)
            flag = !flag;
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
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