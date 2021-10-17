#include <iostream>
#include<algorithm>
#include<set>
#include<map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        long long n,k,countOdd=0;
        cin>>n>>k;
        long long a[n];
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
            if(a[i]%2==1) countOdd++;
        }
        if(countOdd<k)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(countOdd==k)
        {
            cout<<"YES"<<endl;
            int count=0;
            for(int i=0;i<n;++i)
            {
                //if(k==1) cout<<n;
                if(count==k-1)
                {
                    cout<<n;
                    break;
                }
                if(a[i]%2==1)
                {
                    count++;
                    cout<<i+1<<" ";
                }

            }
            cout<<endl;
            continue;
        }
        if((countOdd-k+1)%2==1)
        {
            cout<<"YES"<<endl;
            int count=0;
            for(int i=0;i<n;++i)
            {
                if(count==k-1)
                {
                    cout<<n;
                    break;
                }
                else
                {
                    if(a[i]%2==1)
                    {
                        cout<<i+1<<" ";
                        count++;
                    }
                }
            }
            cout<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }


    }
    return 0;
}


