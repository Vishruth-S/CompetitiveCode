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
        ll n,q;
        cin>>n>>q;

        string a;
        cin>>a;

        ll preZero[n]{},preOne[n]{},postZero[n]{},postOne[n]{};

        int z=0,o=0;
        for(int i=0;i<n;++i){
            preZero[i]=z;
            preOne[i]=o;

            a[i]=='0' ? z++ : o++;
        }

        z=0,o=0;
        for(int i=n-1;i>=0;--i){
            postZero[i]=z;
            postOne[i]=o;

            a[i]=='0' ? z++ : o++;
        }

        /*for(int i=0;i<n;++i){
            cout<<preZero[i]<<" ";
        }
        cout<<endl;*/

        while(q--){
            ll l,r;
            cin>>l>>r;

            l-=1;
            r-=1;

            if(a[l]=='0'){
                if(preZero[l]>0){
                    cout<<"YES"<<endl;
                    continue;
                }
            }
            if(a[l]=='1'){
                if(preOne[l]>0){
                    cout<<"YES"<<endl;
                    continue;
                }
            }
            if(a[r]=='0'){
                if(postZero[r]>0){
                    cout<<"YES"<<endl;
                    continue;
                }
            }
            if(a[r]=='1'){
                if(postOne[r]>0){
                    cout<<"YES"<<endl;
                    continue;
                }
            }
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
