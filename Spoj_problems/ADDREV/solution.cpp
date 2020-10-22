#include<bits/stdc++.h>
using namespace std;
#define jaadu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef unsigned long long int uli;

/*
The approach is to use another number to compute the reverse of number.
Time Complexity: O(Log(n)) where n is the input number.
*/

int reverse(int num){
	int res = 0;
	while(num){				//Until num != 0
		res = res*10 + (num%10);	//Continue generating reversed number using last digit of original num in each iteration.
		num = num/10;			//Removes last digit of original num.
	}
	return res;				//Return the obtained reversed number.
}
int main()
{
	jaadu;
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		a = reverse(a);			//Reverse of number a
		b = reverse(b);			//Reverse of number b
		cout<<reverse(a+b)<<endl;	//Print sum of both reversed numbers.
	}
	return 0;
}
