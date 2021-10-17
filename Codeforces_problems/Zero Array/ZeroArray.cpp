#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin>>n;
    long long a[n],sum=0;
    
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        sum+=a[i];
    }
    long long maxi=*max_element(a,a+n);
    
    if(sum%2==0 && (sum-maxi)>=maxi) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
