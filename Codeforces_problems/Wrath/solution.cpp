#include <bits/stdc++.h>
using namespace std;
 
// The problem consists in find the total number
// of alive people after the bell rings.
// Being x = min(j - Lj), The i-th person will be alive if x > i over all j > i.
// In opposite, the i-th person dies if i > x
// x basically means the range of the claw

int n;           // That is the number of guilty people and alive as well
int killed = 0;  // here we calculate the number of killed ones
int x = INT_MAX;  
vector <int> v(1e6 + 1);
 
void survivors()
{
  // From the problem, we iterate in a reverse way
  for (int i = n - 1; i >= 0; --i)
  {
    // Checks the condition if a people is killed
    if (i >= x) 
    {
      killed++; 
    }
  
    // Update x value
    x = min(x, i - v[i]);
  }

  // Subtract the killed ones and we have those who survived
  printf("%d\n", n - killed );
}
 
int main(int argc, char const *argv[])
{

  // Read the input
  scanf("%d\n", &n);
  for (int i = 0; i < n; ++i)
  { 
    scanf("%d\n", &v[i]); 
  }
 
  survivors();
 
  return 0;
}