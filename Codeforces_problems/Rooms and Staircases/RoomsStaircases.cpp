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
        ll n;
        cin>>n;
        string s;
        cin>>s;
          
        ll left=n,right=-1;
        
        for(int i=0;i<n;++i)
        {
            if(s[i]=='1')
            {
                if(left>i) left=i;
                if(right<i) right=i;
            }
        }
        if(left==n && right==-1)
        {
            cout<<n<<endl;
        }
        else
        {
            ll min_diff=min(left-0,n-1-right);
            
            ll ans=2*(n-min_diff);
            cout<<ans<<endl;
        }
    }
	return 0;
}
