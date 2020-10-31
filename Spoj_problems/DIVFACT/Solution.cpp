#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define m 1000000007
//FIND PRIMES IN [1,N]  USING EXTRA SPACE WITH TIME COMPLEXITY O(N LOG (LOG (N)))
vector<int > v;
void seive(ll n)
{
    ll c=0;
    bool a[n+1];
    for(ll i=0;i<=n+1;i++){
    a[i]=true;
    }
    a[0]=a[1]=false;
    for(ll i=2;i*i<=n;i++)
    {
        if(a[i]==true)
        {
            for(ll j=i*i;j<=n;j+=i)// MAKE FALSE ALL THE MULTIPLES OF NUMBERS WHOSE POSITION IS INITIALLY TRUES
            {
                a[j]=false;
            }
        }
    }
    for(ll i=2;i<=n;i++)
    {
        if(a[i]==true)
        {
            v.push_back(i);
        }
    }
   /* for(ll i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;*/
}

ll factors(ll p,ll n)//this is to calculate that for how many times single prime number occurs
    //in a particular number as p,p^2,p^3.......untill p^k<=n
{

    ll s=0,z,x=1;
    z=p;
    while(z<=n)
    {
        s+=n/z;
        x++;
        z=pow(p,x);

    }
    return s+1;
}
int main()
{
    ll t,c,n,i,j,k,x;
    c=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        seive(n);
        k=1;
        for(i=0;i<v.size();i++)
        {
            x=factors(v[i],n);

            k=(k%m*x%m)%m;
        }
        cout<<k<<endl;
        v.clear();
    }
}
