// The problem is very straight-forward. If rating of a contestant is equal to greater than threshold rating then print "Good boi", otherwise "Bad boi"

#include<bits/stdc++.h> // includes every standard library
#define lli long long int

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); // Speeds up the execution time
    cin.tie(NULL);

    lli n, thresholdRating, rating;
    cin >> n >> thresholdRating;

    while(n--) {
        cin >> rating;

        if(rating >= thresholdRating) {
            cout << "Good boi" << endl;
        } else {
            cout << "Bad boi" << endl;
        }
    }

    return 0;
}