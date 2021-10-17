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

    ll n;
    cin>>n;

    ll a[n];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    ll cur=1;
    ll num=0;
    for(int i=0;i<n;++i)
    {
        if(a[i]>=cur)
        {
            num++;
            cur++;
        }
    }
    cout<<num<<endl;

	return 0;
}
