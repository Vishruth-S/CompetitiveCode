#include <bits/stdc++.h>
using namespace std;
 
// The problem consists in find the total number
// of alive people after the bell rings.
// The i'th person will be alive if min(j - Lj) > i over all j > i.

int n;
int ans = 0;
int minimum = INT_MAX;
vector <int> v(1e6 + 1);
 
void survivors()
{
  for (int i = n - 1; i >= 0; --i)
  {
    if (i >= minimum)
    {
      ans++;  //
    }
 
    minimum = min(minimum, i - v[i]);
  }
 
  printf("%d\n", n - ans );
}
 
int main(int argc, char const *argv[])
{
  scanf("%d\n", &n);
 
  for (int i = 0; i < n; ++i)
  { 
    scanf("%d\n", &v[i]); 
  }
 
  survivors();
 
  return 0;
}