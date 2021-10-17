#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll x,y,z;
    cin>>x>>y>>z;

    ll count=0;
    ll maxFish=x/3;
    ll maxRabbit=y/2;
    ll maxChicken=z/2;

    ll minWeek=min(maxFish,min(maxRabbit,maxChicken));
    ll remFish=x-minWeek*3;
    ll remRabbit=y-minWeek*2;
    ll remChicken=z-minWeek*2;

    count=minWeek*7;

    ll finCount=0;
    for(int i=0;i<7;++i)
    {
        ll max=0;
        ll fish=remFish;
        ll rabbit=remRabbit;
        ll chicken=remChicken;
        for(int j=0;j<7;++j)
        {
            if((i+j)%7==0)
            {
                if(fish>0)
                {
                    fish--;
                    max++;
                }
                else break;
            }
            else if((i+j)%7==1)
            {
                if(fish>0)
                {
                    fish--;
                    max++;
                }
                else break;
            }
            else if((i+j)%7==2)
            {
                if(rabbit>0)
                {
                    rabbit--;
                    max++;
                }
                else break;
            }
            else if((i+j)%7==3)
            {
                if(chicken>0)
                {
                    chicken--;
                    max++;
                }
                else break;
            }
            else if((i+j)%7==4)
            {
                if(fish>0)
                {
                    fish--;
                    max++;
                }
                else break;
            }
            else if((i+j)%7==5)
            {
                if(chicken>0)
                {
                    chicken--;
                    max++;
                }
                else break;
            }
            else if((i+j)%7==6)
            {
                if(rabbit>0)
                {
                    rabbit--;
                    max++;
                }
                else break;
            }
        }
        if(max>finCount) finCount=max;
    }
    ll ans=count+finCount;
    cout<<ans<<endl;


}
