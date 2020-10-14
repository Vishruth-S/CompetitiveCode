#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;//to store the input string
    getline(cin, s);
    
int l=s.length( );//length of string
int k=0;//count of letters changed
for(int i=0;i<l;i++)
{
if((((i+1)%3==1)||((i+1)%3==0)) && (s[i]=='S'))//to store the number of S 
k++;
if(((i+1)%3==2)&&(s[i]=='O'))//to store the number of O 
k++;
}
    cout<<s.length()-k;//the letters which is neither S nor O is our required number
    return 0;
}
