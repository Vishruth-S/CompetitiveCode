//The main idea of the problem is that you are given n numbers and k operations you can do
//what we want to minimize the difference between the maximum element and minimum elements
//In one operation you could add one to any element and remove it from another one
//so the idea of solution we have to sort the array to make the minimum elements in the first and the maxiumum elements in the last
//the we must print:
//the difference and the number od operations we used
//the element we remove from and the element that we add to
#include <iostream>
#include <vector>
#include<algorithm>
#include<string>
#include<bits/stdc++.h> 

using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, k, ok;
	cin >> n >> k;//we take the two inputs n and k
	ok = k;
	vector< pair <int, int> > vect(n), vect2;//create two vector of pairs to save the number of index in the first one and save the operated indexes in the second one
	for (int i = 1; i <= n; i++) {
		cin >> vect[i - 1].first;//taking input
		vect[i - 1].second = i;//saving the index
	}
	while (k > 0) {	//make operations maximum k number of operations
		sort(vect.begin(), vect.end());//sort the vector every time to make the min element in the first and the max one in the last
		if (vect[vect.size() - 1].first < vect[0].first + 2)  break;	//if the difference is less than two then that is the minimum difference
		else {
			vect[0].first++;	//increase the min element by one
			vect[vect.size() - 1].first --;	//decrease the max element by one
			k--;	//decrese the num of operations allowed by one 
			vect2.push_back(make_pair(vect[vect.size() - 1].second, vect[0].second));	//save the index of the operation that we have just fifnshed to print out when we get over
		}
	}
	sort(vect.begin(), vect.end());
	cout << vect[vect.size() - 1].first - vect[0].first << " " << ok - k << endl;	//printing the min difference and the number of operations we make
	//k is the number that last after we make our operations and "ok" is the variable with the original k then the difference is the actual number of operations we have just made 
	for (int i = 0; i < vect2.size(); i++) {
		cout << vect2[i].first << " " << vect2[i].second << endl;	//printing the resulting operations we saved
	}
}
//Happy Coding :))
