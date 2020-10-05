//1080A - Petya and Origami 
//Contributed by Mohd Warid (waridrox)

#include <bits/stdc++.h> 
using namespace std;

int main() {
 
//plane with number i likes the plane with number fi
 
      int n; cin >> n; 
      int k; cin >> k;
      //2 red 5 green 8 blue * 3 => 6r 15g 24b
      //5 sheets per notebook
      //24/5 = 4.8 -> 5
      //15/5 = 3
      //6/5 = 1.2 -> 2
      
      //each notebook consists of only one color of k sheets
      // float red = 2*n;
      // float green = 5*n;
      // float blue = 8*n;
      cout << (2*n+k-1)/k + (5*n+k-1)/k + (8*n+k-1)/k;
      return 0;
}