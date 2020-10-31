#include <bits/stdc++.h>
using namespace std;
 
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 
  string line;
  getline(cin, line);
 
  int total_of_a = count(line.begin(), line.end(), 'a');
  int total_not_a = line.size() - total_of_a;
 
  // First check to see if the number of 'a' is greater than non 'a'
  if (total_not_a < total_of_a){
    printf("%d\n", line.size());
    return 0;
  }else{
    string::iterator it = line.begin();
    // The while delete the non 'a' until the number of 'a' be greater
    // The ideia is the iterator go through the string and delete 
    // where is differente of 'a'
    // The iterator does not have the problem like indexing has
    // when you delete something. 
    while (total_of_a <= total_not_a){ 
      if (*it != 'a'){
        line.erase(it);
      }else it++; // When the iterator finds the 'a' it continues 
      total_not_a = line.size() - total_of_a; // Recalculate 
    }
  }
  printf("%d\n", line.size());
  return 0;
}