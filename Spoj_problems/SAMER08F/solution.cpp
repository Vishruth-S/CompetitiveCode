#include<bits/stdc++.h>
using namespace std;
#define jaadu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef unsigned long long int uli;
/*
	This method calculates no. of different squares in a given grid of N*N squares.
	The end of input is indicated by a line containing only one zero.
	This problem can also be solved using dp using eq => F(n) = n*2 + F(n-1) where F(1) = 1
	However here we will use a simple formula.
	i.e., Sum of Squares = n*(n+1)*(2n+1)/6
*/
int main()
{
	jaadu;
	int n;
	cin>>n;
	while(n!= 0){
		cout<<(n)*(n+1)*(2*n + 1)/6<<endl;
		cin>>n;
	}
	return 0;
}
