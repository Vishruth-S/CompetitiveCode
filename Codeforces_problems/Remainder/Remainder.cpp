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

    ll n,x,y;
    cin>>n>>x>>y;
    
    string s;
    cin>>s;
    
    ll sum=0;
    if(s[n-1-y]!='1') sum=1;
    
    for(int i=n-x;i<n;++i)
    {
        if(i!=n-1-y && s[i]=='1')
        {
            sum++;
        }
    }
    cout<<sum<<endl;

	return 0;
}
