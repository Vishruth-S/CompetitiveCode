#include<iostream>
using namespace std;

int main()
{
  int  t; // t is the no of test cases
  cin>>t;
  while(t--)
  { int n,q,i;
    cin>>n; // n is the length of pin
    if(n%2==0) // if n is even
    q=n/2;  // q is the length of half string
    else q=(n-1)/2; // q is the length of half string
    cout<<1<<" "<<1;
    for(i=0;i<q;i++)
    cout<<0; // palindrome can be composed in 10^q times
    cout<<endl;
  }

  return 0;
}