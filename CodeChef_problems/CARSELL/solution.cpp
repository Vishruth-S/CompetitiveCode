#include <bits/stdc++.h>
#define int long long int
using namespace std;

main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n,greater<int>());
		int res = 0;
		for(int i=0;i<n;i++)
		{
			res += max(a[i]-i, (int) 0);
		}
		res = res%1000000007;
		cout<<res<<endl;
	}
	return 0;
}