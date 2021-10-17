#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
typedef long long ll;
 
ll year(ll x,ll y,ll n)
{
    ll a=x,b=y,num=b-a;
    n%=6;
    if(n==1) num=a;
    else if(n==2) num=b;
    else
    {
        if(n==0) n=6;
    }
    for(int i=2;i<n;++i)
    {
        num=b-a;
        a=b;
        b=num;
    }
    while(num<0)
    {
        num+=1000000007;
    }
    return num%1000000007;
}
 
int main()
 {
	//code
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll x,y,n;
    cin>>x>>y>>n;
    
    cout<<year(x,y,n)<<endl;
	return 0;
}