// The logic is to simulate the entire process. We'll get the extra queries by subtracting k from the current day queries. We'll keep doing this for all value of n.
// If at the end of this process, we still have any query left(queriesLeft >= 0), then we'll output the result by dividing queriesLeft by k and adding (n+1) to it.
// Otherwise we'll straight forward output the value of the day when queriesLeft becomes < 0.

// boilerplate for most of the cpp programs
#include<bits/stdc++.h> // includes every standard library
#define lli long long int

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); // Speeds up the execution time
    cin.tie(NULL);

    lli t; // number of test cases
    cin >> t;

    lli n, k;

    while (t--) {
        cin >> n >> k;

        lli numQuery, totalDays;
        lli queriesLeft = 0;
        bool isQueriesRemaining = true, executeFurther = true;

        for (lli i = 1; i <= n; i++) {
            cin >> numQuery;
            queriesLeft += (numQuery - k);

            if(queriesLeft < 0 && executeFurther) { // execute this when the chef gets his first free day.
                totalDays = i;
                isQueriesRemaining = false;
                executeFurther = false;
            }
        }

        if(isQueriesRemaining) { // when queries are remaining to be solved
            cout << n + (queriesLeft / k) + 1 << endl;
        } else {
            cout << totalDays << endl;
        }
    }

    return 0;
}