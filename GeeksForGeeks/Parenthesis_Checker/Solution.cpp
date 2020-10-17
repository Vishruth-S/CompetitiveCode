#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t; // t is no of test cases
  cin>>t;
 
  while(t--)
  {
    string s;
    cin>>s;
    stack<char> st; // declare stack st
    for(int i=0;i<s.length();i++)  //   iterate through the string
    {
      if(!st.empty() && st.top()==s[i]) //If the current character is a closing bracket (‘)‘ or ‘}‘ or ‘]‘) then check if it is matching bracket.
      st.pop();    // if matching bracket then pop from the stack
      else
      st.push(s[i]); // If the current character is a starting bracket (‘(‘ or ‘{‘ or ‘[‘) then push it to stack.
    }
    if(st.empty())
    cout<<"balanced"<<endl;
    else
    cout<<"not balanced"<<endl;
  }
  return 0;
}
