#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
typedef long long ll;

ll year(ll n)
{
    for(int i=n+1;;++i)
    {
        ll temp=i;
        set<ll> s;
        while(temp>0)
        {
            s.insert(temp%10);
            temp/=10;
        }
        if(s.size()==4) return i;
    }
}

int main()
 {
	//code
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    
    cout<<year(n)<<endl;
	return 0;
}
