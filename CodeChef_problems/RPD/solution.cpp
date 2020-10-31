// The logic is to store the sum of product of all the digits. The naive approach is by running nested loops.
// After recording the sum of product of all numbers, we can just find the maximum value from that array.

#include<bits/stdc++.h> // includes every standard library
#define lli long long int

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); // Speeds up the execution time
    cin.tie(NULL);

    lli t; // number of test cases
    cin >> t;

    while(t--) {
		int n, i, j, max = -1;
		cin >> n;

		vector<int> sequence(n);
        vector<int> sumOfProducts; // holds sum of products of two digits

		for(i = 0; i < n; i++) {
			cin >> sequence[i];
		}

        // store sum of products of two digits
        for(int i = 0; i < n - 1; i++) {
            for(int j = i + 1; j < n; j++) {
                int sum = 0;
                int product = sequence[i] * sequence[j];

                while(product > 0) {
                    sum += product % 10;
                    product /= 10;
                }

                sumOfProducts.push_back(sum);
            }
        }

        // print the maximum value in the array
		for(i = 0; i < sumOfProducts.size(); i++) {
		    if(sumOfProducts[i] > max) {
		        max = sumOfProducts[i];
            }
	    }

        cout << max << endl;
    }

    return 0;
}