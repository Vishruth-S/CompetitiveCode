#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define scl(n) scanf("%lld",&n)
#define scll(n,m) scanf("%lld%lld",&n,&m)
#define scs(ch) scanf("%s", ch)
#define pb push_back
#define mp make_pair
#define fr first
#define sc second

ll dp[1100000][2],sz,n;
vector < ll > vec;
//vector < pair<ll,pair<ll,ll > > >tmp;

ll op(ll pos,ll fg)
{
    if(pos>=sz){
        if(fg==1 || pos>sz)
            return 0;

        return vec[pos]-vec[pos-1];
    }
    if(dp[pos][fg]!=-1)
        return dp[pos][fg];
    ll z=1e9,a,b,c;
    if(pos==0){
        a=op(pos+2,0)+vec[pos+1]-vec[pos];
        z=min(a,z);
        a=op(pos+1,1)+(n-vec[sz]+vec[0]);
        z=min(z,a);
    }
    else{
        a=op(pos+2,fg)+vec[pos+1]-vec[pos];
        z=min(z,a);
        a=op(pos+1,fg)+vec[pos]-vec[pos-1];
        z=min(z,a);
    }
    return dp[pos][fg]=z;
}


int main()
{
    ll test,t,i,j,k,a,b,c,x,y,z,m;
    scl(test);
    for(t=1;t<=test;t++)
    {
        scl(n);
        vec.clear();
        for(i=1;i<=n;i++)
        {
            scl(a);
            if(a){
                vec.pb(i);
            }
            //ck[i]=0;
        }
        //ck[0]=0;
        if(vec.size()==1){
            printf("-1\n");
            continue;
        }
        sz=vec.size();
        sz--;
        for(i=0;i<=sz;i++){
            dp[i][0]=-1;
            dp[i][1]=-1;

        }
        a=op(0,0);
        printf("%lld\n",a);
        vec.clear();
        //vec.pb()

    }

    return 0;
}



