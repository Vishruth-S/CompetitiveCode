/*
Consider a cricket game with a series of N overs (numbered 1 through N) played by K players (numbered 1 through K). Each player may be the bowler for at most L overs in total, but the same player may not be the bowler for any two consecutive overs. Assign exactly one bowler to each over in such a way that these rules are satisfied or determine that no such assignment exists.
*/

// including libraries

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
        cin >> n >> k >> l; //taking input 
        vector<int> v;
        if (k == 1 && n > 1)  	//if value of k =1 and n>1 then return -1
        {
            cout << "-1" << endl;
            continue;
        }
        while (l--)
        {
            int temp = k;
            while (temp--)
            {
                v.push_back(temp + 1);  // push temp +1 in vector v
            }
        }
        if (v.size() < n)
            cout << "-1" << endl; 	//if size of the vector is less than n print -1

        else
        {
            for (int i = 0; i < n; i++)
                cout << v[i] << ' '; 	//else print elements in  v vector
            cout << endl;
        }
    }
    return 0;
}