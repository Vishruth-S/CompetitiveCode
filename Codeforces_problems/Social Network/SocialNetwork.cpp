#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<set>
using namespace std;
typedef long long ll;
#define mod 1000000007

int main()
 {
	//code
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k;
    cin>>n>>k;

    ll a[k]{},j=0;
    set<ll> s;
    for(int i=0;i<n;++i)
    {
        ll num;
        cin>>num;
        if(s.find(num)==s.end())
        {
            s.insert(num);
            if(a[j]==0)
            {
                a[j]=num;
                j=(j+1)%k;
            }
            else
            {
                s.erase(a[j]);
                a[j]=num;
                j=(j+1)%k;
            }
        }
    }
    j=(k+j-1)%k;
    ll count=k;
    for(int i=0;i<k;++i)
    {
        if(a[i]==0) count--;
    }
    cout<<count<<endl;
    for(int i=j;count--;)
    {
        cout<<a[i]<<" ";
        i--;
        if(i==-1) i=k-1;
    }
	return 0;
}
