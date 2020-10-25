//The logic behind the solution is to divide the string in two parts and store the frequencies
//of each character in array1 or array2 depending on whether it is from first half or second
//Then we compare both the arrays, if all the frequencies are same then we print "YES" else "NO"

#include<bits/stdc++.h>
using namespace std;
void solve();
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int tcases;
  cin>>tcases;
  while(tcases) //for running all the strings
  {
      solve();
      --tcases;
  }
   return 0;
}
void solve()
{
    string str;
    cin>>str;
    int arr1[26], arr2[26];
    memset(arr1,0,sizeof(arr1));  //initialising all the array elements with 0
    memset(arr2,0,sizeof(arr2));  //initialising all the array elements with 0
    for(int i=0;i<str.length()/2;i++) //for first half of the string
    {
        arr1[int(str[i]-'a')]++;  //  int(str[i]-'a') converts the character into respective integer depending upon its position
    }
    int j=str.length()/2;
    if(str.length()%2==1) //if length is odd then we need to skip a character
        ++j;
    for(;j<str.length();j++)
    {
        arr2[int(str[j]-'a')]++;  //  int(str[i]-'a') converts the character into respective integer depending upon its position
    }
    for(int i=0;i<26;i++)
    {
        if(arr1[i]!=arr2[i]){ //if mismatch in frequencies then print "NO"
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";  //if frequencies remain same till now then print "YES"
}
