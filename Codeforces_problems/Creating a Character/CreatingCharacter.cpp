#include<iostream>
#include<algorithm>
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
        ll n,m,q;
        cin>>n>>m>>q;
        
        n+=q;
        
        if(n<=m) cout<<0<<endl;
        else
        {
            if(q==0) cout<<1<<endl;
            else
            {
                ll count=min((n-m+1)/2,q+1);
                cout<<count<<endl;
            }
        }
    }   
	return 0;
}