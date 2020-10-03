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
