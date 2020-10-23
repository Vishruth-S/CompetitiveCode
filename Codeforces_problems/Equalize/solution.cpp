#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n, con=0;
	cin >> n; //length of the strings a and b.
	string a, b;
	int c[n];
	
	cin >> a >> b;
 
	for(int i=0; i<n-1; i++){
		if(a[i]!=b[i]){ //if ai and bi are different, check if the i+1 of each one is different or equal
			if(a[i+1]==b[i+1]) con++; //if they are the same it will not be possible to exchange
			else{
				if(a[i]!=a[i+1]){ //if ai is different from ai+1 they switch places with each other
					swap(a[i], a[i+1]); 
					con++;
				}
				else con++;
			}
		}
	}
 
	if(a[n-1]!=b[n-1]) con++; //checks whether the last strings are the same or not
 
	cout << con;
 
    return 0;
}