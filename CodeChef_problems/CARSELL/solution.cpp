/*
This is a problem that can easily be solved with a Greedy Approach, the key  points to be noted are:
1. Only one car can be sold per year
2. The price of the cars cannot deprecate under 0, ie: it will remain 0

We want to maximize our profit and hence we would like to sell of the cars with the maximum price first,
before it gets deprecated too much. These high priced cars will give us our main chunks of profit.
*/

#include <bits/stdc++.h>
#define int long long int
using namespace std;

main() {
	int t;
	cin>>t;
	while(t--)
	{
		//Taking inputs
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		//Inputs have been taken
		sort(a,a+n,greater<int>());				//We sort the array in descending order to get the maximum profit cars first
		int res = 0;
		for(int i=0;i<n;i++)
		{
			res += max(a[i]-i, (int) 0);		//A simple loop that sells the cars one by one, we either take the deprecated value of
		}										//the car or we take the price to be 0, since it cannot deprecate beyond 0.
		res = res%1000000007;					//The result is operated upon a modulo 10^9 + 7
		cout<<res<<endl;
	}
	return 0;
}