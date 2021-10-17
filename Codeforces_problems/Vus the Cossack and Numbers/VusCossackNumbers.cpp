#include <iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    double a[n];
    long long sum=0;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        sum+=int(a[i]);
    }
    if(sum<0)
    {
        for(int i=0;i<n;++i)
        {
            if(a[i]>0)
            {
                if(a[i]!=int(a[i]) && sum!=0)
                {
                    cout<<int(a[i])+1<<endl;
                    sum++;
                }
                else
                {
                    cout<<int(a[i])<<endl;
                }
            }
            else
            {
                cout<<int(a[i])<<endl;
            }
        }
    }
    else
    {
        //cout<<sum<<endl;
        for(int i=0;i<n;++i)
        {
            //cout<<int(a[i])<<endl;
            if(a[i]<0)
            {
                if(a[i]!=int(a[i]) && sum!=0)
                {
                    cout<<int(a[i])-1<<endl;
                    sum--;
                }
                else
                {
                    cout<<int(a[i])<<endl;
                }
            }
            else
            {
                cout<<int(a[i])<<endl;
            }
        }
    }


    return 0;
}


