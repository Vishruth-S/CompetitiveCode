#include<bits/stdc++.h>
#include<algorithm>
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
    ll a[n][n];
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            cin>>a[i][j];
        }
    }
    ll b[n];
    b[0]=sqrt((a[0][1]*a[0][2])/a[1][2]);
    cout<<b[0]<<" ";
    for(int i=1;i<n;++i)
    {
        b[i]=a[0][i]/b[0];
        cout<<b[i]<<" "; 
    }
    cout<<endl;
	return 0;
}
