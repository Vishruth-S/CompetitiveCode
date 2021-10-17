#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007

int main()
{
	//code
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t--)
    {
        ll r,g,b,w;
        cin>>r>>g>>b>>w;

        ll sum = r+g+b+w;

        if(sum%2==0){
            if(r%2==0 && g%2==0 && b%2==0 && w%2==0){
                cout<<"Yes"<<endl;
            }
            else{

                if(r==0 || g==0 || b==0){
                    cout<<"No"<<endl;
                }
                else {
                    r--;
                    b--;
                    g--;
                    w+=3;
                    if(r%2==0 && g%2==0 && b%2==0 && w%2==0)
                    {
                        cout<<"Yes"<<endl;
                    }
                    else cout<<"No"<<endl;
                }
            }
        }
        else{
            int odd = 0,even=0;
            odd += (r%2==1 ? 1:0)+(g%2==1 ? 1:0)+(b%2==1 ? 1:0)+(w%2==1 ? 1:0);
            even = 4-odd;

            if(even==3)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                if(r==0 || g==0 || b==0){
                    cout<<"No"<<endl;
                }
                else {
                    r--;
                    b--;
                    g--;
                    w+=3;
                    odd = 0,even=0;
                    odd += (r%2==1 ? 1:0)+(g%2==1 ? 1:0)+(b%2==1 ? 1:0)+(w%2==1 ? 1:0);
                    even = 4-odd;
                    if(even==3)
                    {
                        cout<<"Yes"<<endl;
                    }
                    else cout<<"No"<<endl;
                }
            }
        }
    }
	return 0;
}
