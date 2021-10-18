#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int t;
    cin >> t;
    while (t--)
    {
    long long int x,y;
    cin>>x>>y;
    long long int xz=max(x,y);
    if(xz%2==0){
        if(y>x){
            cout<<(y*y)-(2*y-1-x);
        }
        else{
            cout<<(x*x)-(y-1);
        }
    }
    else{
        if(x>y){
            cout<<(x*x)-(2*x-1-y);
        }
        else{
            cout<<(y*y)-(x-1);
        }
    }
        cout<<"\n";
    }
    return 0;
}