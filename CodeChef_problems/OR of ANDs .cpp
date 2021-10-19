#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <cmath>
#include <numeric>
using namespace std;
typedef long long int lli;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
long long int binaryToDecimal(int *num)
{
    long long int dec_value = 0;
    long long int base = 1;
    for (int i = 0; i < 32; i++)
    {
        if (num[i] > 0)
            dec_value += base;

        base = base * 2;
    }
    return dec_value;
}

void oreo()
{
    int n, q;
    cin >> n >> q;
    long long int k, arr[n];
    int f[32] = {0};

    for (int j = 0; j < n; j++)
    {
        cin >> arr[j];
        k = arr[j];
        int a[32] = {0};
        for (int i = 0; i < 32; ++i)
        {
            a[i] = (k >> i) & 1;
            if (a[i] == 1)
            {
                f[i]++;
            }
        }
    }
    cout << binaryToDecimal(f) << "\n";
    while (q--)
    {
        long long int l, x, v;
        cin >> x >> v;
        l = arr[x - 1];
        arr[x - 1] = v;
        int a[32] = {0};
        for (int i = 0; i < 32; ++i)
        {
            a[i] = (l >> i) & 1;
            if (a[i] == 1)
            {
                f[i]--;
            }
        }
        int b[32] = {0};
        for (int i = 0; i < 32; ++i)
        {
            b[i] = (v >> i) & 1;
            if (b[i] == 1)
            {
                f[i]++;
            }
        }

        cout << binaryToDecimal(f) << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
    {
        oreo();
    }

    return 0;
}