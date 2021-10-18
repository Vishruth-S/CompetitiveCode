#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <cmath>
#include <numeric>
using namespace std;
int main()
{
    ios::sync_with_stdio(!cin.tie(0));
    ios::sync_with_stdio(!cout.tie(0));
    int n;
    cin >> n;
    vector<int> v;
    string s2 = "0";
    int f = 0, a = 0, b = 0, c = 0, d = 0, l, x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x, x + n);
    for (int i = 0; i < n; i++)
    {
        l = x[i];
        string str1 = to_string(l);

        if (a == 0 && l == 0)
        {
            v.push_back(l);
            a = 1;
        }
        else if (b == 0 && l > 0 && l < 10)
        {
            v.push_back(l);
            b = 1;
        }
        else if (c == 0 && l == 100)
        {
            v.push_back(l);
            c = 1;
        }
        else if (b == 0 && d == 0 && f == 0 && strstr(str1.c_str(), s2.c_str()) == 0 && str1.length() > 1)
        {
            v.push_back(l);
            d = 1;
        }
        else if (d == 0 && f == 0 && strstr(str1.c_str(), s2.c_str()))
        {
            v.push_back(l);
            f = 1;
        }
    }

    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}