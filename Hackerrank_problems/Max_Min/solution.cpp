#include <bits/stdc++.h>

using namespace std;

// calculateMaxMin is helper function for iterate k subArray that return max - min
int calculateMaxMin(vector<int>arr, int start, int k) {
    int maxNum = INT_MIN;
    int minNum = INT_MAX;
    
    for (int i = start; i < start + k; i++) {
        maxNum = max(maxNum, arr[i]);
        minNum = min(minNum, arr[i]);
    }

    return maxNum - minNum;
}

// Complete the maxMin function below.
int maxMin(int k, vector<int> arr) {
    // sort asc for more easy unfairness detection
    sort(arr.begin(), arr.end());
    int len = arr.size();
    int unfairness = INT_MAX; // init with max integer value
    
    for (int i = 0; i < len - k + 1; i++) {
        // calculate max min and compare with unfairness value
        int compare = calculateMaxMin(arr, i, k);
        unfairness = min(unfairness, compare);
    }

    return unfairness;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item;
        cin >> arr_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        arr[i] = arr_item;
    }

    int result = maxMin(k, arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
