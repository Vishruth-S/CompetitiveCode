#include<iostream>
#include<algorithm>
#include<set>
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
        ll a[n+1];
        for(int i=1;i<=n;++i)
        {
            cin>>a[i];
        }
        ll ans[n+1]{};
        for(int i=1;i<n+1;++i)
        {
            set<ll> s;
            if(ans[i]==0)
            {
                s.insert(i);
                ll cur=a[i];
                ll sum=1;
                while(cur!=i)
                {
                    s.insert(cur);
                    sum++;
                    cur=a[cur];
                }
                for(auto itr=s.begin();itr!=s.end();++itr)
                {
                    ans[(*itr)]=sum;
                }
            }
        }
        for(int i=1;i<=n;++i)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
	return 0;
}
