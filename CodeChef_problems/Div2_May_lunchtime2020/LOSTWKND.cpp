#include<bits/stdc++.h>
using namespace std;
#define w(x) long long x;cin>>x;while(x--)



int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	w(x)
	{

		long long arr[5], p;
		for (long long i = 0; i < 5; i++)
			cin >> arr[i];
		cin >> p;
		long long sum = 0;


		for (long long i = 0; i < 5; i++)
			sum += arr[i];



		if (sum * p <= 120)
			cout << "No" << endl;
		else
			cout << "Yes" << endl;



	}


	return 0;
}