//correct solution
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
	int n, nt;
	long s = 0, m;
	cin >> n;
	int *a = new int[n];
	long *b = new long[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 1; i < n; i++)
		b[i] = a[i]+b[i-1];
	for (int i = 0; i < n; i++)
	{
		nt = 2 * (n - i);
		nt = ((int)sqrt(1 + 4 * nt) - 1) / 2;
		nt = (nt * (nt + 1)) / 2;
		if(i == 0)
		{
			m = b[nt-1];
			s = m;
		}
		else
			s = b[nt+i-1]-b[i-1];
		m = max(m, s);
		s = 0;
	}
	cout << m;
	return 0;
}
