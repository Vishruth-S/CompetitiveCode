/*
	take the input and store it in the vector (st)
	then loop over the number of test cases
	sort the string (will sorth the chars)
	then if tmp smaller than the char, will add the char in answer string
	the do while will stop when the char equal to tmp.
	then check if the answer is empty, if it is then print "no answer",
	and if no then will print the answer.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<string> st;

int main() {
	string c;
	int numberOfTestCases;//number of test cases
	cin >> numberOfTestCases;
	for (int i = 0; i < numberOfTestCases; i++) {
		string s;
		cin >> s;
		st.push_back(s);
	}
	for (int i = 0; i < numberOfTestCases; i++) {
		string tmp = st[i];
		string answer;
		do {
			next_permutation(st[i].begin(), st[i].end()); // for sorting 
			if (tmp < st[i])
				answer = st[i];
			tmp = st[i];

		} while (st[i] != tmp);

		if (answer.empty())
			cout << "no answer" << endl;
		else
			cout << answer << endl;
	}
	return 0;
}
