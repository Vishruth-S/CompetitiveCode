#include <bits/stdc++.h>
using namespace std;

// Function to find the K'th smallest element in the array using max-heap

int findKthSmallest(vector<int> const &v, int k)
{
	// create a max-heap using std::priority_queue and
	// insert first k elements of the array into the heap
	priority_queue<int, vector<int>> pq(v.begin(), v.begin() + k);

	// do for remaining array elements
	for (int i = k; i < v.size(); i++)
	{
		// if current element is less than the root of the heap
		if (v[i] < pq.top())
		{
			// replace root with the current element
			pq.pop();
			pq.push(v[i]);
		}
	}

	// return the root of max-heap
	return pq.top();
}

// Find K'th smallest element in an array
int main()
{
	int n,k;
    cin >> n>> k;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        vec.push_back(x);
    }
	cout << "K'th smallest element in the array is " << findKthSmallest(vec, k);
	return 0;
}