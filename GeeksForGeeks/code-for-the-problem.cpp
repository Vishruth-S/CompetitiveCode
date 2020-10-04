// C++ program to implement 
// the above approach 
#include <bits/stdc++.h> 
using namespace std; 

int n, t; 

// Function to find the number of 
// completely filled vessels 
int FindNoOfFullVessels(int n, int t) 
{ 
	
	// Store the vessels 
	double Matrix[n][n]; 

	// Assuming all water is present 
	// in the vessel at the first level 
	Matrix[0][0] = t * 1.0; 

	// Store the number of vessel 
	// that are completely full 
	int ans = 0; 

	// Traverse all the levels 
	for(int i = 0; i < n; i++) 
	{ 
		
		// Number of vessel at each 
		// level is j 
		for(int j = 0; j <= i; j++) 
		{ 
			
			// Calculate the exceeded 
			// amount of water 
			double exceededwater = Matrix[i][j] - 1.0; 

			// If current vessel has 
			// less than 1 unit of 
			// water then continue 
			if (exceededwater < 0) 
				continue; 

			// One more vessel is full 
			ans++; 

			// If left bottom vessel present 
			if (i + 1 < n) 
				Matrix[i + 1][j] += exceededwater / 2; 

			// If right bottom vessel present 
			if (i + 1 < n && j + 1 < n) 
				Matrix[i + 1][j + 1] += exceededwater / 2; 
		} 
	} 
	return ans; 
} 

// Driver Code 
int main() 
{ 
	
	// Number of levels 
	int N = 3; 

	// Number of seconds 
	int T = 4; 

	// Function call 
	cout << FindNoOfFullVessels(N, T) << endl; 
	
	return 0; 
} 

// This code is contributed by Jayadev
