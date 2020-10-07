#include<iostream>
using namespace std;

int main()
{
  int t;  // t is the no. of test cases
  cin>>t;
  while(t--)
  {
    string s;
    cin>>s;
    int k,n;
    cin>>k>>n;
    char c;  // c is the character whose occurence need to be counted
    cin>>c;
    int ext=n%s.size(); // extra string left
    int count=0;
    for(int i=0;i<ext;i++) // count occurence of character in extra string
    {
      if(s[i]==c)
      count++;
    }
    int c1=0;
    for(int i=0;i<s.size();i++)  // count occurence of character in main string
    {
      if(s[i]==c)
      c1++;
    }
    cout<<c1*(n/s.size())+count<<endl;  // occurence in main string repeated (n/>s.size()) times and extra string
  }

  return 0;
}