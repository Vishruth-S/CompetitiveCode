#include <bits/stdc++.h>
using namespace std;

// isPaired will define whenever the array has paired that equal to k
bool isPaired(vector<long long int> A, int length, int k) {
	int left=0, right = length - 1; // init left and right pointer for upper lower bound

	while(left < right) {
	    if (A[left] + A[right] < k)	left++; // increase lower bound if result < k
		else if (A[left] + A[right] > k) right--; // deacrease upper bound if result > k
	    else { // pair number is found. A[left] + A[right] = k
	        return true;
	    }
	}

    return false;
}

int main() {
	int t, n;
	long long int k, input; // define reusable variable
	string answer = "";
	cin >> t; // input test case
	for (int i=1; i<=t; i++) {
	    cin >> n >> k;
	    vector<long long int> A;
	    for (int j=0; j<n; j++) {
	        cin >> input;
			// limit unnecesary input
			// constrain input > = 1 and ignore if input > k
	        if (0 < input && input < k) {
	            A.push_back(input);
	        }
	    }
		// sort vector ASC for knowing lower and highest boundary
	    sort(A.begin(), A.end());
	    answer = isPaired(A, A.size(), k) ? "Yes" : "No";
	    cout << answer << endl;
	}
}
