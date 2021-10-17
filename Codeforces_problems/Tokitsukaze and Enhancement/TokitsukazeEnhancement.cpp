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
        long long x;
        cin>>x;
        long long num=x;
        if(x%4==1)
        {
            cout<<"0 A"<<endl;
        }
        else if(x%4==2)
        {
            cout<<"1 B"<<endl;
        }
        else if(x%4==3)
        {
            cout<<"2 A"<<endl;
        }
        else
        {
            cout<<"1 A"<<endl;
        }
    //}
    return 0;
}
