#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
//i have used quite simple approch 
  int m, n;
  cin>>m>>n;
//i took the input from the user

  int A;
  int q;
  //then by observing the given test cases
  //i stored the product of the given input in A
  //then divided it by 2
  A=m*n;
  q=A/2;
  cout<<q;
  return 0;
}
