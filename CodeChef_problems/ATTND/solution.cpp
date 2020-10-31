// The logic is to check the first name of all students and maintain records of those students who have common first name.
// By maintaining the record, we'll be able to distinguish the students whose first & last names need to be called out.

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

        // save first name and last name in different arrays
        vector<string> first(n);
	    vector<string> last(n);

	    for(lli i = 0; i < n; i++) {
	        cin >> first[i] >> last[i];
	    }

        vector<bool> callOnlyFirstName(n, true);

        // check if first name of one student matches with any other student's first name.
	    for(lli i = 0; i < n - 1; i++) {
            if(callOnlyFirstName[i] != false) {
                for(lli j = i + 1; j < n; j++) {
                    if(first[i] == first[j]) {
                        callOnlyFirstName[i] = false;
                        callOnlyFirstName[j] = false;
                    }
                }
            }
	    }

        // Output first & lastname for students having same first name and print only first name for all others.
	    for(lli i = 0; i < n; i++){
	        if(callOnlyFirstName[i]) {
	            cout << first[i] << endl;
	        } else {
	            cout << first[i] << " " << last[i] << endl;
	        }
	    }
    }

    return 0;
}