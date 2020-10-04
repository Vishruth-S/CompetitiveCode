#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <string>
#define ll long long
#define modu 1000000007
using namespace std;

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, l;
        cin >> n >> k >> l;
        vector<int> v;
        if (k == 1 && n > 1)
        {
            cout << "-1" << endl;
            continue;
        }
        while (l--)
        {
            int temp = k;
            while (temp--)
            {
                v.push_back(temp + 1);
            }
        }
        if (v.size() < n)
            cout << "-1" << endl;
        else
        {
            for (int i = 0; i < n; i++)
                cout << v[i] << ' ';
            cout << endl;
        }
    }
    return 0;
}