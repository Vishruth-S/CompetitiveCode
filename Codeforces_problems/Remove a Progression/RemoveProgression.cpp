#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x;
        cin>>n>>x;
        long long ans=2*x;
        cout<<ans<<endl;
    }
    return 0;
}
