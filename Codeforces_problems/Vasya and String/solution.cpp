#include <bits/stdc++.h>
using namespace std;
 
// We use two pointers to solve this problem
// We use l and r as pointers, moving r in order to do k swaps
// and we need to do for both, 'a' and 'b'.

int n, k;
string s;
 
int BeautyString(char ch)
{
  int ret = 0;  // maximum substring
  int r = 0;    // r pointer
  int cnt = 0;  // count the k swaps
 
  for (int l = 0; l < n; ++l)
  {
    // This while checks if r is in the and of string (r < n)
    // if it is possible to make swaps (cnt < k )
    // the current letter is different of the letter wanted
    while (r < n && (cnt < k || s[r] != ch))
    {
      if (s[r] == ch)
        cnt++;
      r++;
    }
 
    // When l pointer moves, we can make more swaps
    if (s[l] == ch)
      cnt--;
  
    // Update the maximum substring size with the difference   
    if (ret < r - l)
      ret = r - l;
  }
 
  return ret;
}
 
int main(int argc, char const *argv[])
{
  cin >> n >> k; 
  cin >> s;
 
  int a = BeautyString('a');
  int b = BeautyString('b');
 
  // Finally, we compare which one did the greater substring
  cout << max(a,b) << '\n';
  
  return 0;
}