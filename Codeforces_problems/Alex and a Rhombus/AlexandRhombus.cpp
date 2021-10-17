#include <iostream>
#include<algorithm>
#include<set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //int t;
    //cin>>t;
    //while(t--)
    //{
    long long n;
    cin>>n;
    long long ans=(n*n)+((n-1)*(n-1));
    cout<<ans<<endl;
    //}
    return 0;
}
