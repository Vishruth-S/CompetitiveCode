#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE                 //For testing using input and output files
    freopen("ip.txt", "r", stdin);
    freopen("op.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(0);             //For faster input/output
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while(t--)
    {
        // Type your code here...
        ll n, m;
        cin >> n >> m;
        ll sum = n + m;              	//Here we create a map, whose keys would be grades of
        map <ll, ll> cmap;		//students inside of the class and values would be 
        while (n--)			//no. of students having that grade
        {
            ll ai;			//Entering grades of students PRESENT INSIDE THE CLASS
            cin >> ai;
            cmap[ai]++;
        }
        while (m--)
        {
            ll ai;			//Entering grades of students ABOUT TO ENTER THE CLASS
            cin >> ai;
            auto it = cmap.find(ai);
            if(it == cmap.end())	//If student with entered grade is not present inside
            {				//the map(class), s/he will not it.
                cout << "NO\n";
            }
            else			//Otherwise, s/he will enter.
            {
                cout << "YES\n";
            }
            cmap[ai]++;
        }
        

    }
    return 0;
}
