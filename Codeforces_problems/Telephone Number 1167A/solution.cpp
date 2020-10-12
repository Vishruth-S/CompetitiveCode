// Import all C++ libraries
#include <bits/stdc++.h>
// This is made for avoiding typos
#define FORN(i, x) for(int i = 0; i < x; ++i)

using namespace std;

int main() {
    // Number of test cases
    int t;
    cin >> t;
    // For each test case
    while (t--) {
        // The length of string s
        int n;
        cin >> n;
        // Contains the digits
        string s;
        cin >> s;
        bool ok = false;
        // If n is below 11 then it's impossible to make a telephone number
        // Otherwise check if it's possible to make a telephone number
        // by deleting digits until an '8' is placed on the right position
        // and then deleting any digit until it's exactly 11 digits
        if (n >= 11)
            FORN(i, n-10) {
                if (s[i] == '8') {
                    ok = true;
                }
            }
        // If there is a sequence of operations, after which s becomes a telephone number
        if (ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}