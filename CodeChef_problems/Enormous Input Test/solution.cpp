//Enormous Inout Test (Problem Code: INTEST)
#include<iostream>
using namespace std;

int main()
{
	unsigned int n, divisor, dividend;
	int count = 0;
	
	cin >> n >> divisor;  
	for(int i = 0; i < n; i++)
	{
		cin >> dividend; //input k each iteration
		if(dividend % divisor == 0) //check if it is divisible
			count++; //output
	}
	cout << count;
}