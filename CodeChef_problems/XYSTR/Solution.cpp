/*
We follow a greedy approach to solve this problem. 
Simply traverse from left to right over the string and check whether the students at current index and the next index are of opposite sex. If so, count them as a pair and increment our iterator so as to skip the counted next index student. 
Proceed this way till the end of the string.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 0; i < s.size() - 1; ++i)
        {
            if ((s[i] == 'x' and s[i + 1] == 'y') or (s[i] == 'y' and s[i + 1] == 'x'))
            {
                ans++;
                i++;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}