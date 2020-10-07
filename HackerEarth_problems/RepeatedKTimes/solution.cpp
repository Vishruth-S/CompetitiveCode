#include <iostream>
using namespace std;

int main() {
	int arrSize;
	cin >> arrSize;

	// fill array with the inputted elements
	int arr[arrSize];
	for (int i=0; i < arrSize; i++){
		cin >> arr[i];
	}


	// fill occurrences array with # of each int present in arr
	int occurrences[arrSize] = { 0 };
	for (int i=0; i < arrSize; i++){
		occurrences[arr[i]]++;
	}

	int k;
	cin >> k; // # of occurences we're looking for

	int answer = -1;

	// the first time a number has the desired # of occurrences,
	// save that number in our "answer" variable
	for (int i=0; i < arrSize; i++){
		if (occurrences[i] == k && answer == -1)
			answer = i;
	}
	
	cout << answer;
}


