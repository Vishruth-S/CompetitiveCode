//author - Nihal Mittal
//codechef handle - https://www.codechef.com/users/nihal_47

//LOGIC

/**The problem requires us to find the number of lines such that they are below the given point
   (xi, yi). The equation of the given line in problem can be represented as x + y = a. So if we add
   any 2 points their sum should be less than x + y. This comes down to applying binary search as the array
   is sorted. The index we find is the answer as it will give the number of lines which are closer to origin
   and below the given point.
 **/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, q, i, j;
        cin >> n;
        vector<ll> a(n);
        //Taking input of array a[]
        for (i = 0; i < n; i++)
            cin >> a[i];
        cin >> q;
        //Processing the queries
        while (q--)
        {
            ll x, y;
            cin >> x >> y;
            //Adding the points as the equation is x+y
            x += y;
            //Applying the binary search function in array a[]
            auto it = upper_bound(a.begin(), a.end(), x);
            //If the point is below every given line, answer is 0
            if (it == a.begin())
                cout << "0"
                     << "\n";
            else
            {
                it--;
                //If the point lies on a line we output the answer as -1
                if (*it == x)
                    cout << "-1"
                         << "\n";
                else
                {
                    //The answer is the index we found in the array
                    ll ans = (it - a.begin()) + 1;
                    cout << ans << "\n";
                }
            }
        }
    }
}