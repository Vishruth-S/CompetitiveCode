#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int tc, ts, js, t, c;
	cin >> tc;
	while(tc--)
	{
		cin >> ts;
		t=ts;
		c=0;
		while(t%2==0)
		{
			c++;
			t=t/2;
		}
		c++;
		js=pow(2,c);
		c=ts/js;
		cout << c << endl;
	}
}
