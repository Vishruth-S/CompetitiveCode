#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second
#define pb push_back

using namespace std;


/*
We can make a balanced array only when n is divisible by 4 
this is because if n%4 == 2 implies that n/2 is odd and the sum of first half will be even
however the sum of second half will be odd therefore they will never be equal.
 Thus, the construction algorithm is as follows
the first n/2 elements are 2*(i + 1)
the remaining n/2 elements are created by the logic first n/2 - 1 elements will be 2*i + 1
the last element will be the difference needed to make the sum equal of both the halves.
*/


int main()
{
	std::ios::sync_with_stdio(false); //fastio
	int T;
	cin>>T;
	while(T--)
	{
		ll n;
		cin>>n;
		if(n%4 == 2){
			cout<<"NO"<<endl;
			continue;
		}else{
			cout<<"YES"<<endl;
		}	
		ll s= 0;
		for(int i = 0;i<n/2;i++){
			cout<<2*(i +1 )<<" ";
			s += 2*(i+1);
		}
		for(int i = 0;i<(n/2) - 1;i++){
			cout<<2*i + 1<<" ";
			s -= 2*i + 1;
		}
		cout<<s<<endl;
	}
	return 0;
}
