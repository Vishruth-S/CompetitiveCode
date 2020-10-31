#include <bits/stdc++.h>
using namespace std;
 
// The problem consists in find the minimum light radius d, 
// needed to light the whole street. 
// To do that, we need to find the maximum between two neighbours
// We consider the distance between two neighbours
// and the street bounds (a[0] - 0 and l - a[n - 1])
)
int n,l;
vector<double> lanterns;
 
void readAndSortLanterns() // Read the input and sort que vector
{
  while(n--)
  {
    double temp;
    scanf("%lf\n", &temp);
    lanterns.emplace_back(temp);
  }
 
  sort(lanterns.begin(), lanterns.end());
}
 
double returnMaxDistanceBetweenLanterns()
{
  double result = -1;
  for (int i = 0; i < lanterns.size() - 1; ++i)
  {
    result = max(result, lanterns[i + 1] - lanterns[i]);
  }
 
  return result;
}
 
int main(int argc, char const *argv[])
{
  double maxDistance;
  double minimumLightRadius;
  scanf("%d %d\n", &n, &l);
 
  readAndSortLanterns(); // call to function to read the input and sort
  maxDistance = returnMaxDistanceBetweenLanterns();
  minimumLightRadius = 
    max({maxDistance / 2, lanterns[0], l - lanterns[lanterns.size() - 1]});
 
  printf("%.10lf\n", minimumLightRadius ); 
  return 0;
}