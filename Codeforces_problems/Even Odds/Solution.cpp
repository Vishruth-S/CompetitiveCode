/*
In this problem we need to understand how exactly numbers from 1 to n rearrange when we write firstly all odd numbers and after them all even numbers.
To find out which number stands at position k one needs to find the position where even numbers start and output either the position of the odd number from the first half of the sequence or for the even number from the second half of the sequence.
*/
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