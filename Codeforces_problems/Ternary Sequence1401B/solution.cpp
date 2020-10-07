//Time complexity O(1)
//Space complexity O(1)


/* We can find the kind of the value of ci is three (−2,0,2).
And ci is −2 only if ai is 1 and bi is 2, and ci is 2 only if ai is 2 and bi is 1.
Otherwise ci is 0. So we have to make (ai,bi) pair (1,2) as little as possible, and pair (2,1) as much as possible.
To do this, first we can make (1,0) pair, (0,2) pair, and (2,1) pair as much as possible.
After that, pairing the remaining values doesn't affect the sum of ci.
(It ai in which value is 1 and bi in which value is 2 are all left, we have to pair them although the sum decreases.)*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_case=1;
    cin >> test_case;
    while(test_case--) {
        long long x1,x2,y1,y2,z1,z2;
        cin >> x1 >> y1 >> z1;
        cin >> x2 >> y2 >> z2;

        long long  ans=0;
        long long  m = min(z1,y2);
        ans+=m*2;
        z1 -= m;
        y2 -= m;

        m = min(z2,x1);
        x1 -= m;
        z2 -= m;

        m = min(z1,z2);
        z1 -= m;
        z2 -= m;

        if(z2 > 0)
            ans -= z2*2;
        cout << ans << endl;
    }
}


