#include<iostream>
using namespace std;
int main( )
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		string s;
		cin>>s;
		for(int j=0;j<s.length();j++)
		cout<<(char)(219-s[j]);
		cout<<endl;
	}
	return 0;
}
