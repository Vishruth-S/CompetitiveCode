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

        ll a[n];
        unordered_map<int,int> m;
        for(int i=0;i<n;++i){
            cin>>a[i];
            m[a[i]]++;
        }

        ll mini = INT_MAX, index= -1;
        for(int i=0;i<n;++i){
            if(m[a[i]]==1 && mini>a[i]){
                mini = min(mini,a[i]);
                index = i+1;
            }
        }


        cout<<index<<endl;
    }
	return 0;
}
