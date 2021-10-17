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
        ll n;
        cin>>n;

        vector<ll> v(n);
        
        for(int i=0;i<n;++i){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        
        ll maxCount = 0;
        
        for(int i=2;i<=100;++i){
            ll sum = i,count=0;
            
            int l = 0, r = n-1;
            
            while(l<r){
                if(v[l]+v[r]==sum){
                    ++l;
                    --r;
                    count++;
                }
                else if(v[l]+v[r]>sum){
                    r--;
                } 
                else ++l;
            }
            
            maxCount = max(maxCount,count);
        }
        cout<<maxCount<<endl;
    }
	return 0;
}
