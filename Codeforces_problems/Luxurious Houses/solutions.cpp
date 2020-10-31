
#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n, max=0;
	cin >> n; //number of houses in the capital of Berland
	int a[n], b[n];
 
	for(int i=0; i<n; i++){
		cin >> a[i]; //number of floors in the i-th house
	}
 
	b[n-1]=0;  
	max=a[n-1]; //consider that initially the largest house is the one on the right most
	for(int i=n-2; i>=0; i--){ //for from right to left
		if(a[i]<=max) b[i]=max-a[i]+1; //if the current house is smaller than the one considered to be bigger so far
		else b[i]=0, max=a[i]; //if the current house is bigger than all the previous ones
	}
 
	for(int i=0; i<n; i++){
		cout << b[i] << " ";
	}
    return 0;
}