//Author : @shashankseth01
//Simple solution for variablesize array in c++ language

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n, q ,k;
    cin >> n >> q;
    int a[n];
    int **arr = new int*[n];  
    for(int i = 0; i < n; i++) {
        cin >> k;
        a[i] = k;
        arr[i] = new int[k];
        for(int j = 0; j < k; j++) {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < q; i++) {
        int p, q;
        cin >> p >> q;
        cout << arr[p][q] << endl;
    }
    return 0;
}
// used 'new' opeator for dynamic memory allocation ,if you check out the problem statement 
// you will encounter that the array elements are not taken in a continuous manner form the input
// first the size of the 1D array is given and then the array elemnts
// So, coming back to solution I have defined an array pointer(that holds the number of rows)
// At the time of execution the size of row is decided by 'k' ,for that 'n' we make an array of size 'k' at that position.
// So, basically we are trying to make it a 2D array using dynamic memory alocation.   
// and rest is just input and output.
