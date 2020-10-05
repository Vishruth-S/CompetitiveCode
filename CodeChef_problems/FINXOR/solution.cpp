#include<bits/stdc++.h>
using namespace std;
#define int long long
/*
The approach to solve this problem heavily relies on the property that A+B = (A^B) + 2*(A&B)
The interactor gives us the value of A1^k + A2^k + A3^k ... AN^k
Using the above mentioned property, we know A + k = (A^k) + 2*(A&K)
Hence, (A^k) = A+k - (2*(A&K))
Which implies ->
A1^k + A2^k + A3^k ... AN^k = A1 + A2 + A3 .. AN + N*k - 2*(A1&k + A2&k + A3&k .. AN&k)
Lets us denote the A1 + A2 + A3 .. AN by S as it is constant in every query, hence
A1^k + A2^k + A3^k ... AN^k = S + N*k - 2*(A1&k + A2&k + A3&k .. AN&k) - Equation 1
Therefore,
(A1&k + A2&k + A3&k .. AN&k) = (S + N*k - o)/2; where o is the value given by interactor
Now , Let k = 1<<i, then (A&(1<<i)) tells use whether ith bit is set or not, hence
(A1&k + A2&k + A3&k .. AN&k) where k = 1<<i will be equal to 1<<i for some numbers if there ith bit is set
Hence, (A1&k + A2&k + A3&k .. AN&k)/(1<<i) will tell us count of the numbers whose ith bit is set.
Or in otherwords (S+N*k-o)/(2*(1<<i)) will tell us  the count of the numbers whose ith bit is set - Equation 2
Now, an interesting property of XOR is that XOR of 2 bits p & q is equal to (p+q)%2;
Hence, XOR of N bits could be given by (no. of set bits at ith position)%2
If we know the count of number of set bits at ith position, then we know the resultant ith bit of XOR
This count is given by Equation 2
Hence, by using the 20 questions which we could ask the interactor, we could figure out the 20 bits of XOR
as Ai <= 10^6, we do not need any further questions.
*/
int32_t main()
{	
	int t;
	cin>>t;
while(t--){
	int n;
	cin>>n;
	int s=0,o,i=1;
	int d[21]={0};
	cout<<1<<" "<<(1<<20)<<endl;
	cin>>s;
	s = s - n*(1<<20); //Sum for Equation 1
	if(s&1){
		d[0] = 1; //The 0th bit could simply be obtained by taking an AND with 1
	}
	else{
		d[0] = 0;
	}
	while(i!=20){//Remaining 19 bits could be obtained by the remaining 19 questions.
		cout<<1<<" "<<(1<<i)<<endl;
		cin>>o;
		d[i] = (s + n*(1<<i) - o)/(1<<(i+1));//((1<<i)*2) = (1<<(i+1))
		i++;
	}
	int x=0;
	int y=1;
	for(int i=0;i<=19;++i){
		x += (d[i]%2)*y;
		y = y*2;
	}
	cout<<2<<" "<<x<<endl;
	int ans;
	cin>>ans;
	if(ans==-1){
		return 0;
	}
}
	return 0;
}
