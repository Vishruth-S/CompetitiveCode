#include<bits/stdc++.h>
using namespace std;
#define jaadu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef unsigned long long int uli;
/*
 * A simple method to count the trailing zeroes in a factorial of a number is to first calculate the factorial of n, then count tailing 0s in the result. However, this method can cause overflow for large numbers (as here, the range is 1 <= n <= 10^9)
 *
 * Another method is to consider prime factors, as trailing zeros are always produced by prime factors 2 & 5.
 * As 5*2 = 10 i.e., 1 trailing zero.
 * Trailing zeroes = Count of 5s in prime factors of n! (Count of 2s are always more than 5s)
 * 		   =  Count all single 5 using n/5 + Count hidden 5 using n/25 , n/125, so on.
		   =  floor(n/5) + floor(n/25) + floor(n/125) + .....
 *
 */

int solve(int n){
	int res = 0, i=5;
	while(n/i){
		res = res + n/i;	//Count of 5s
		i = i*5;		//Considering hidden 5s (like in 25 = 5*5)
	}
	return res;
}
int main()
{
	jaadu;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;			//Input n
		int res = solve(n);	//Count trailing zeroes in n!
		cout<<res<<endl;	//Output result
	}
	return 0;
}

