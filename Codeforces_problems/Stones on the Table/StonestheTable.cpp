#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
typedef long long ll;

int main()
 {
	//code
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a,count=0;
    cin>>a;
    string s;
    cin>>s;

    for(int i=1;i<s.length();++i)
    {
        if(s[i]==s[i-1]) count++;
    }
    cout<<count<<endl;
	return 0;
}
