#include <iostream>
#include<algorithm>
#include<set>
#include<map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m;
    cin>>m;

    while(m--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int r1[n]{};
        int b1[n]{};
        int g1[n]{};

        int sum=0;
        for(int i=0;i<n;++i)
        {
            if(i%3==0 && s[i]=='R')
            {
                sum++;
            }
            else if(i%3==1 && s[i]=='G')
            {
                sum++;
            }
            else if(i%3==2 && s[i]=='B')
            {
                sum++;
            }
            r1[i]=sum;
        }
        sum=0;
        for(int i=0;i<n;++i)
        {
            if(i%3==0 && s[i]=='G')
            {
                sum++;
            }
            else if(i%3==1 && s[i]=='B')
            {
                sum++;
            }
            else if(i%3==2 && s[i]=='R') sum++;

            b1[i]=sum;
        }
        sum=0;
        for(int i=0;i<n;++i)
        {
            if(i%3==0 && s[i]=='B') sum++;
            else if(i%3==1 && s[i]=='R') sum++;
            else if(i%3==2 && s[i]=='G') sum++;

            g1[i]=sum;
        }

        int ans=0;
        for(int i=0;i<n-k+1;++i)
        {
            if(i==0)
            {
                ans=max(ans,r1[k-1]);
            }
            else
            {
                ans=max(ans,r1[i+k-1]-r1[i-1]);
            }
        }
        for(int i=0;i<n-k+1;++i)
        {
            if(i==0)
            {
                ans=max(ans,b1[k-1]);
            }
            else
            {
                ans=max(ans,b1[i+k-1]-b1[i-1]);
            }
        }
        for(int i=0;i<n-k+1;++i)
        {
            if(i==0)
            {
                ans=max(ans,g1[k-1]);
            }
            else
            {
                ans=max(ans,g1[i+k-1]-g1[i-1]);
            }
        }
        cout<<k-ans<<endl;
    }
    return 0;
}


