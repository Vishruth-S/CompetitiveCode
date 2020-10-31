#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
 
int main()
{
	int t,n,x;
 
	cin >> t;     //take input of number of test cases
 
	vector<int> ans;    // declare a vector
 
	for(int i=1; i<=t; i++)
	{
		cin >> n >> x;       //taking input for n and x, t times  
 
		if(n == 1 || n == 2)
		{
			ans.push_back(1);   //if n=1 or 2 floor will be 1
		}
		else
		{
		double floor = (double)(n-2)/x;  //type cast to double, (n-2) to remove 2 rooms from first floor which is already handled above 
		ans.push_back(ceil(floor) + 1);   //insert answer to the vector
		}
	}
	for(int i=0; i<t; i++)
	{
		cout << ans[i] << '\n';        //print the answer
	}
 
 
	return 0;
}