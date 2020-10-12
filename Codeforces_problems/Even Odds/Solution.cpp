#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
 
   long long nums, pos;
    cin >> nums >> pos;
    if (nums % 2 == 0) {
        if (pos > nums / 2) {
            cout << (pos - (nums / 2)) * 2;
        }
        else {
            cout << pos * 2 - 1;
        }
    }
    else {
        if (pos > nums / 2+1) {
            cout << (pos - (nums / 2+1)) * 2;
        }
        else {
            cout << pos * 2 - 1;
        }
 
    }
    return 0;
}