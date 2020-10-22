Code : Edit Distance (Memoization and DP)
Send Feedback
Given two strings s and t of lengths m and n respectively, find the Edit Distance between the strings. Edit Distance of two strings is minimum number of steps required to make one string equal to other. In order to do so you can perform following three operations only :
1. Delete a character

2. Replace a character with another one

3. Insert a character
Note - Strings don't contain spaces
Input Format :
Line 1 : String s
Line 2 : String t
Output Format :
Line 1 : Edit Distance value
Constraints
1<= m,n <= 20
Sample Input 1 :
abc
dc
Sample Output 1 :
2
















				PRACTICE
#include<iostream>
#include<cstring>
using namespace std;

int editDistance(string s1, string s2){

  /*  Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Return output and don't print it.
   *  Taking input and printing output is handled automatically.
   */


}

				SOLUTION
#include<iostream>
#include<cstring>
using namespace std;

int editDistance(string s1, string s2){

  /*  Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Return output and don't print it.
   *  Taking input and printing output is handled automatically.
   */

 if(s1.length()==0) return s2.length();
    if(s2.length()==0) return s1.length();

    // both strings have atleast one character
    // Initialize result (2D Array of size m*n) to -1
    int m = s1.length(), n = s2.length();
    int **result = new int*[m];
    for(int i=0; i<m; i++)
    {
        result[i] = new int[n];
    }
    bool found;
    // Fill in the first row
    for(int j=0, found=false; j<n; j++)
    {
        if(s1[m-1]==s2[n-1-j]) found = true;
        result[0][j] = found? j:j+1;
    }
    // Fill in the first column
    for(int i=1, found=false; i<m; i++)
    {
        if(s1[m-1-i]==s2[n-1]) found = true;
        result[i][0] = found? i:i+1;
    }

    for(int i=1; i<m; i++)
        for(int j=1; j<n; j++)
        {
            if(s1[m-1-i]==s2[n-1-j]) result[i][j] = result[i-1][j-1];
            else
            {
                int a = result[i-1][j];
                int b = result[i][j-1];
                int c = result[i-1][j-1];
                result[i][j] = min(min(a, b), c) + 1;
            }
        }
    int ans = result[m-1][n-1];
    for(int i=0; i<m; i++)
        delete [] result[i];
    delete [] result;
    return ans;
}

#include "Solution.h"

int main(){

  string s1;
  string s2;

  cin >> s1;
  cin >> s2;

  cout << editDistance(s1,s2) << endl;

}




