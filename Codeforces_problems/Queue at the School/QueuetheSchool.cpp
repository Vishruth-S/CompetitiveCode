#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

int main()
 {
	//code
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,t;
    cin>>n>>t;

    string a;
    cin>>a;

    for(int i=0;i<t;++i)
    {
        for(int j=0;j<a.length()-1;++j)
        {
            if(a[j]=='B' && a[j+1]=='G')
            {
                swap(a[j],a[j+1]);
                j++;
            }
        }
    }
    cout<<a<<endl;

	return 0;
}
