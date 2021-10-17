#include<iostream>
#include<algorithm>
#include<map>
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
    t=1;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;

        string a[n];
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
        }
        ll flag[n][m]{};
        for(ll i=0;i<n-2;++i)
        {
            for(ll j=0;j<m-2;++j)
            {
                if(a[i][j]=='#' && a[i+1][j]=='#' && a[i+2][j]=='#' && a[i][j+2]=='#' && a[i+1][j+2]=='#' && a[i+2][j+2]=='#' && a[i][j+1]=='#' && a[i+2][j+1]=='#')
                {
                    flag[i][j]=1;
                    flag[i+1][j]=1;
                    flag[i+2][j]=1;
                    flag[i][j+2]=1;
                    flag[i+1][j+2]=1;
                    flag[i+2][j+2]=1;
                    flag[i][j+1]=1;
                    flag[i+2][j+1]=1;
                }
            }
        }
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
                if(a[i][j]=='#' && flag[i][j]!=1)
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
        cout<<"YES"<<endl;
    }

	return 0;
}
