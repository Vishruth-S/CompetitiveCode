// My Submission
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<int>X;
vector<int>Y;
main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int test;
	cin>>test;
	while(test--)
	{
		ll n,m,q,row=0,col=0,ans=0,x,y;
		cin>>n>>m>>q;
		X.assign(n,0);
		Y.assign(m,0);
		
		while(q--)
		{
			cin>>x>>y;
			X[x-1]++;
			Y[y-1]++;
		}
		for(int i=0;i<n;i++)
		{
			if(X[i]%2==1)
				row++;
		}
		for(int i=0;i<m;i++)
		{
			if(Y[i]%2==1)
				col++;
		}
		ans=(row*m)+(col*n)-2*(row*col);
		cout<<ans<<"\n";
	}
}