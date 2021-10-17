#include<bits/stdc++.h>
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
        ll n,x;
        cin>>n>>x;
        
        ll a[n],b[n];
        
        for(int i=0;i<n;++i){
            cin>>a[i];
        }
        for(int i=0;i<n;++i){
            cin>>b[i];
        }
        
        bool ans=true;
        ll start = 0, last = n-1;
        while(start<n){
            if(a[start]+b[last]>x){
                ans = false;
                break;
            }
            start++;
            last--;
        }
        if(ans){
            cout<<"Yes"<<endl;
        }else cout<<"No"<<endl;
    }
	return 0;
}
