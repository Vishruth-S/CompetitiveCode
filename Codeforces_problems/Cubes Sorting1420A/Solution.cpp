
// Contributed by Athul John (Codeforces: i_am_apj)

#include <bits/stdc++.h> 

using namespace std;
 
 /*
 The main clue of this question is the equation (n*(n-1))/2 -1.
 When we sort an array by swapping elements, the Worst case happens when the array is strictly decreasing, because the
 whole array need to be reversed. To reverse an array of n elements the number of operations needed is (n*(n-1))/2.
 So if the array is not strictly decreasing, then it is possible possible to sort in less than (n*(n-1))/2 operations.
 That is less than or equal to (n*(n-1))/2 -1 operations. So we just need to check whether the array is strictly 
 decreasing or not. 
 */
void solve()
{
  int n,flag=0;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  for(int j=n-1;j>0;j--)
  {
    if(arr[j]>=arr[j-1])// checking every element whether it is greater than or equal to its previous element. If yes, it is not strictly decreasing.
    {
      flag=1;
      break;
    }
  }
  if(flag==1)
  {
    cout<<"YES\n";
  }
  else
  {
    cout<<"NO\n";
  }
  
  }
  
int main(){
  int t;
  cin>>t;
  while(t--)
  {
     solve();
  }
  return 0;
}