// The sequence can be made good if the inital sum of numbers is greater than or equal to 0, otherwise it's not possible.
// eg. the sequence -3, 2 can never be made a good sequence because there's no way we can make the sum 0.

// For cases where the initial sum >= 0, in those cases we can calculate the sum of all its elements and then subtract the element on first index "sum" number of times.
// eg. For sequence 3, 4, 5 the inital sum is 12. We can subtract 3 "12" number of times as we can subtract only 1 at a time.
// After subtracting it 12 times, we'll have the result -9, 4, 5, and the sum of the sequence will be 0.

#include<bits/stdc++.h> // includes every standard library
#define lli long long int

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); // Speeds up the execution time
    cin.tie(NULL);

    lli t; // number of test cases
    cin >> t;

    while(t--) {
        lli n;
        cin >> n;

        lli sum = 0;
        lli num;

        for(int i = 0; i < n; i++) {
            cin >> num;
            sum += num;
        }

        if(sum >= 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}