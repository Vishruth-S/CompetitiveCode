#include <bits/stdc++.h>
using namespace std;


int main() {
  int a[100][100], max = -324, temp, b[100];

  for ( int i=0; i<6; i++ ) {
    for ( int j=0; j<6; j++ ) {
      cin >> a[i][j];
    }
  }

  for ( int i=0; i<4; i++ ) {         // input matrix is 6x6 and our stride is 3x3, so inorder to cover the whole are we can move at most 4 steps
    for ( int j=0; j<4; j++ ) {       // rigth and 4 steps down so here i and j is 0 - 3
      temp = a[i][j] + a[i][j+1] + a[i][j+2] + a[i+1][j+1] + a[i+2][j] + a[i+2][j+1] + a[i+2][j+2] ; // this are the position of the matrix we need to clculate

      if ( temp > max ) {  //every time we will store the max value compareing to the privous
        max = temp;   
      }
    }
  }
  cout << max << endl;
  return 0;
}
