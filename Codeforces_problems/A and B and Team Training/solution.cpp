#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n, m, con=0;
	cin >> n >> m; //number of experienced participants and newbies that are present at the training session.
 
	while(n>0 & m>0){		
		if(n==1 && m==1) break;
		//see which one has the most members in each round to balance as much as possible
		if(m>n){
			m-=2;
			n-=1;
			con++;
		}
		else{
			n-=2;
			m-=1;
			con++;
		}
		
	}
 
	cout << con;
 
	return 0;
}