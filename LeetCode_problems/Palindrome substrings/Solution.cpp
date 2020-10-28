// C++ program to find all distinct palindrome sub-strings 
// of a given string 
#include <iostream> 
#include <map> 
using namespace std; 

//function to find all continuous palindromic substrings
void palindromeSubStrs(string s) 
{       //hash map tp store palindromes
	map<string, int> m; 
	int n = s.size(); 
          // array to strore details of even and odd length palindromes
	int R[2][n+1]; 


	s = "@" + s + "#"; 

	for (int j = 0; j <= 1; j++) 
	{        // length of 'palindrome radius' 
		int rp = 0;
		R[j][0] = 0; 

		int i = 1; 
		while (i <= n) 
		{ 
			while (s[i - rp - 1] == s[i + j + rp]) 
				rp++; 
			R[j][i] = rp; 
			int k = 1; 
			while ((R[j][i - k] != rp - k) && (k < rp)) 
			{ 
				R[j][i + k] = min(R[j][i - k],rp - k); 
				k++; 
			} 
			rp = max(rp - k,0); 
			i += k; 
		} 
	} 

	s = s.substr(1, n); 
       
    // Put all obtained palindromes in a hash map 
	m[string(1, s[0])]=1; 
	for (int i = 1; i <= n; i++) 
	{ 
		for (int j = 0; j <= 1; j++) 
			for (int rp = R[j][i]; rp > 0; rp--) 
			m[s.substr(i - rp - 1, 2 * rp + j)]=1; 
		m[string(1, s[i])]=1; 
	} 
	
    //printing all distinct palindromes from hash map 
cout <<"Possible Palindromic Substrings";
map<string, int>::iterator ii; 
for (ii = m.begin(); ii!=m.end(); ++ii) 
	cout << (*ii).first << endl; 
} 

