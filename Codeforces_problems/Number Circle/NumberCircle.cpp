#include <iostream>
#include<algorithm>
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
        long long a[n];
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int flag=0;
        if(a[n-1]>=a[n-2]+a[n-3]) flag=1;
        if(flag==1) cout<<"NO"<<endl;
        else 
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n-2;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<a[n-1]<<" "<<a[n-2];
            cout<<endl;
        }
    //}
    return 0;
}
