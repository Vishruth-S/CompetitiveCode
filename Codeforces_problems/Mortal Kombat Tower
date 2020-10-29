#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,a,b) for(int i = a; i < b; i++)
#define lb(v, a) lower_bound(v.begin(), v.end(), a)


void solve(){
int n, ans, c=0; cin>>n;
int arr[n]; rep(i,0,n) cin>>arr[i];
if(arr[0]==1) ans=1;
else ans=0;
rep(i,1,n){
        if(arr[i]==1)c++;
        else{
            if(c >=3){
                while(c){
                    c-=2;
                    if(c>0) ans++, c--;
                }
            }
            c=0;
        }
    }
if(c>=3)while(c){
    c-=2;
if(c>0) ans++, c--;
}
    cout<<ans<<endl;
}
 
signed main(){
    int t=1; cin>>t;
    while(t--) solve();
}
