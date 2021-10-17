#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

int main()
 {
	//code
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a,b;
    cin>>a;

    for(int i=0;i<a.length();++i)
    {
        if(a[i]=='.') b+='0';
        else if(a[i]=='-')
        {
            if(a[i+1]=='.') b+='1';
            else b+='2';
            i++;
        }
    }
    cout<<b<<endl;
	return 0;
}
