#include<iostream>
using namespace std;

/* This function finds whether the amount can be given to Mila or not
  i.e. if any sum of coins with gila equals amount to be distributed(x)
*/
bool findsum(int a[],int n,int sum)
{
  if(sum==0)
  return 1;
  if(sum!=0 && n==0 )   // If there are no coins and n is greater than 0, then no solution exist
  return 0;
  if(a[n-1]>sum)     // i.e. a[n-1] can't be included in solution
  return findsum(a,n-1,sum);
  return (findsum(a,n-1,sum)||findsum(a,n-1,sum-a[n-1])); //  is sum of solutions including a[n-1] or excluding a[n-1]
}

int money(int a[],int n,int m,int sum)
{
  if(sum==m) // that means gila and mila have same amount of money
  return 1;
  if(sum<m)
  return 0;  // because Mila won't share her money
  int x;
  x=sum-m;  // the amount that to be distributed between mila and gila
  if(x%2!=0)
  return 0;  // amount to be distributed can't be in fraction
  x=x/2;
  if(findsum(a,n,x))
  return 1;
  return 0;
}

int main() {
  int t; //  t for no of test cases
  cin>>t;
  while(t--)
  {
    int n,m;   //  n is number of coins with Gila and m is the total amount present with Mila
    cin>>n>>m;
    int a[n],sum=0,i;  //  a[n] is array to store the value of each coin with Gila
    for(i=0;i<n;i++)
    { cin>>a[i];
      sum+=a[i];    //  sum is the total amount with Gila
    }
    cout<<money(a,n,m,sum)<<endl;
  }
  return 0;
}