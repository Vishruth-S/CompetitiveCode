#include<bits/stdc++.h>
using namespace std;
	#define author          "Sihare0riginals"
	#define ss       		string 
	#define lli      		long long int
	#define ld       		long double
	#define f        		first
	#define s        		second
	#define all(v)   		v.begin(),v.end()
	#define pb       		push_back
	#define mp       		make_pair
	#define L(i,start,end)  for(lli i=start;i<=end;i++)
	#define R(i,start,end)  for(lli i=start;i>=end;i--)
	#define ip(n) 			cin>>n;lli ip[n+1];L(i,1,n)cin>>ip[i];
const lli LINF = 1e18,mod=1e9+7;

ss con(lli n,lli m)
{
	ss ret;
	while(n>0)
	{
		ret+=(n%2)+'0';
		n/=2;
	}
	lli sz=ret.size();
	L(i,1,m-sz)
	ret+="0";
	reverse(all(ret));
	return ret;
}
signed main()
{
	lli t=1;
	cin>>t;
	while(t--){
		set<ss> s1;
		lli n,m;
		cin>>n>>m;
		ss ip[n+1];
		L(i,1,n)
			cin>>ip[i];
		lli md=((lli)1<<(m-1)),ed=((lli)1<<(m))-1;
		lli l=max(((lli)1<<(m-1))-n,(lli)0),r=min(l+2*n,ed);
		L(i,l,r)
		{
			lli cnt=0;
			bool poss=true;
			L(j,1,n)
			{
				if(ip[j]==con(i,m))
				{
					poss=false;
					break;
				}
				if(ip[j]<con(i,m))
					cnt++;
			}
			lli rem=n-cnt;
			if(n%2==0&&poss)
			{
				if((i-cnt+1)==(ed-i-rem))
				{
					cout<<con(i,m)<<endl;
					break;
				}
			}
			else if(poss)
			{
				if((i-cnt)==(ed-i-rem))
				{
					cout<<con(i,m)<<endl;
					break;
				}
			}
		}
	}
	return 0;
}
