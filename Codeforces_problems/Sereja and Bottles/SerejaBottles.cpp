#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

int main()
 {
	//code
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    ll a[n],b[n],flag[n]{};
    for(int i=0;i<n;++i)
    {
        cin>>a[i]>>b[i];
    }
    ll count=0;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            if(i!=j && b[i]==a[j])
            {
                flag[j]=1;
            }
        }
    }
    for(int i=0;i<n;++i)
    {
        if(flag[i]==0) count++;
    }
    cout<<count<<endl;
	return 0;
}
