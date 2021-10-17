#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
typedef long long ll;

int main()
 {
	//code
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a[3][3];
    for(int i=0;i<3;++i)
    {
        for(int j=0;j<3;++j)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<3;++i)
    {
        for(int j=0;j<3;++j)
        {
            ll sum=a[i][j];
            if(i!=0)
            {
                sum+=a[i-1][j];
            }
            if(i!=2)
            {
                sum+=a[i+1][j];
            }
            if(j!=0)
            {
                sum+=a[i][j-1];
            }
            if(j!=2)
            {
                sum+=a[i][j+1];
            }
            if(sum%2==0)
            {
                cout<<1;
            }
            else cout<<0;
        }
        cout<<endl;
    }
	return 0;
}
