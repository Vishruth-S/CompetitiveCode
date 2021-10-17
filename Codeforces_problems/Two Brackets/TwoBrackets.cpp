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
        string s;
        cin>>s;
        
        ll open1=0,open2=0;
        
        ll count = 0;
        
        for(int i=0;i<s.length();++i){
            if(s[i]=='['){
                open1++;
            }
            else if(s[i]=='('){
                open2++;
            }
            else if(s[i]==']'){
                if(open1<=0){
                    continue;
                }
                else{
                    open1--;
                    count++;
                }
            }
            else if(s[i]==')'){
                if(open2<=0){
                    continue;
                }
                else{
                    open2--;
                    count++;
                }
            }
        }
        cout<<count<<endl;

    }

	return 0;
}
