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

        cout<<n-1<<endl;

        for(int i=2;i<=(n);++i){
            cout<<i<<" ";
        }
        cout<<endl;
    }
	return 0;
}
