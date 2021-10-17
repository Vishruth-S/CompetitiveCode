#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define mod 1000000007

int main()
 {
	//code
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll h,w;
    cin>>h>>w;

    ll hi[h],wi[w];
    for(int i=0;i<h;++i)
    {
        cin>>hi[i];
    }
    for(int i=0;i<w;++i)
    {
        cin>>wi[i];
    }

    ll a[h][w]{};
    for(int i=0;i<h;i++)
    {
        ll k=hi[i];
        for(int j=0;j<k;++j)
        {
            a[i][j]=1;
        }
        a[i][k]=2;
    }
    ll flag=1,f=0;
    for(int i=0;i<w;i++)
    {
        ll k=wi[i];
        for(int j=0;j<k;++j)
        {
            if(a[j][i]==2)
            {
                flag=0;
                break;
            }
            a[j][i]=1;
        }
        if(a[k][i]==1)
        {
            flag=0;
            if(k<h) f=1;
            break;
        }
        a[k][i]=2;

        if(flag==0) break;
    }

    ll ans=0;

    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;++j)
        {
            //cout<<a[i][j]<<" ";
            if(a[i][j]==0) ans++;
            if(a[i][j]==2) f=1;
        }
        //cout<<endl;
    }

    ll fin_ans=0;
    if(f==0)
    {
        cout<<1<<endl;
        return 0;
    }
    if(flag==0)
    {
        cout<<0<<endl;
        return 0;
    }
    if(ans>=1) fin_ans=2;
    for(int i=1;i<ans;++i)
    {
        fin_ans=(2*(fin_ans%mod))%mod;
    }
    cout<<fin_ans<<endl;
	return 0;
}