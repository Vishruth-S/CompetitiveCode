#include<iostream>
#include<algorithm>
#include<unordered_map>
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
    
    if(n%2==1) cout<<0<<endl;
    else
    {
        ans=pow(2,n/2);
        cout<<ans<<endl;
    }
	return 0;
}
