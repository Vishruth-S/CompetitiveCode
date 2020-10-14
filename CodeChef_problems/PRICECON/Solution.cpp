/*
Since the loss is generated only for the items which had the original cost higher than k, we only check those items.
Initialise the loss total amount as 0.
s = 0
For each item, check whether its price 'p' is higher than k. If so, then its price would get reduced to k and Chef suffers a loss of amount = p-k
Add this loss to the total amount.
If the original price 'p' was lower than k, we can simply ignore the item as it would be sold at the same price.

Display the final loss amount thus obtained.
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        ll n, k;
        cin >> n >> k;
        ll p, s = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> p;
            if (p > k)
            {
                s += p - k;
            }
        }
        cout << s << '\n';
    }

    return 0;
}