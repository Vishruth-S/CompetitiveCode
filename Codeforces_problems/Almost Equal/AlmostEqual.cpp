#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

int main()
 {
	//code
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
    ll n;
    cin>>n;

    if(n%2==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        ll a[2*n]{};
        a[0]=1;
        a[n]=2;
        ll num=3,start1=1,mid1=n+1;

        for(int i=0;i<(n-1);++i)
        {
            if(i%2==0)
            {
                a[mid1]=num;
                num++;
                mid1++;
                a[start1]=num;
                num++;
                start1++;
            }
            else{
                a[start1]=num;
                num++;
                start1++;
                a[mid1]=num;
                num++;
                mid1++;
            }
        }
        for(int i=0;i<2*n;++i)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }
    }

	return 0;
}
