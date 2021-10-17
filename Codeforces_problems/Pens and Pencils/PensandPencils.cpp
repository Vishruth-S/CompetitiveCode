#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
#define mod 1000000007

int main()
 {
	//code
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t--)
    {
        ll a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;

        ll x=ceil(float(a)/c);
        ll y=ceil(float(b)/d);

        if(x+y>k) cout<<-1<<endl;
        else
        {
            x+=(k-(x+y));
            y=y;
            cout<<x<<" "<<y<<endl;
        }

    }
	return 0;
}
