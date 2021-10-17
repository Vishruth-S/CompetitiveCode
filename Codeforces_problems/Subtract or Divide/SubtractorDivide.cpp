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
        
        int count=0;
        if(n==1){}
        else if(n==2){
            count=1;
        }
        else if(n%2==0 || n==3){
            count=2;
        }
        else count=3;
        
        cout<<count<<endl;
    }
	return 0;
}
