/*
    Dividing TS till an odd number is reached and counting the number of divisions (count).
    In order for JS to win, the smallest such number will have to be divided the same number of times till even. (Resulting in TS being odd and JS being even, so JS wins - first such occurrence)
    Smallest such number will therefore be 2^(count +1)
    Winning numbers will be a list of multiples of this smallest number and less than TS.
*/

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
