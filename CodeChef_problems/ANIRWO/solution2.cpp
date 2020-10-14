//Question Link
//https://www.codechef.com/problems/ANIRWO

#include<iostream>
using namespace std;
int main( )
{
	int t;//to store the number of test cases
	cin>>t;
	for(int i=0;i<t;i++)
	{
		string s;// to store the string input
		cin>>s;
		for(int j=0;j<s.length();j++)
		/*219 is the sum of ascii code of a and z */
		cout<<(char)(219-s[j]);//converting each character into the required character
		cout<<endl;//to print each test case in a new line
	}
	return 0;
}
