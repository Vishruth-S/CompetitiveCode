#include<bits/stdc++.h>
using namespace std;
#define jaadu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long int uli;
/*
	In this problem, we need to find the next sequence of give AP or GP series.
	If a2-a1 == a3-a2, then its a AP series, otherwise its a GP series.
*/
int main()
{
	jaadu;
	uli a1,a2,a3;
	cin>>a1>>a2>>a3;
	while(a1!=0 || a2 !=0 || a3 !=0){			//Loop until the End of input (denoted by 0 0 0)

		if((a2-a1)==(a3-a2)){				//Check for AP Series
			cout<<"AP "<<a3 + (a3-a2)<<endl;	//Print next AP Seq
		}
		else{						//GP Series
			cout<<"GP "<<a3*(a3/a2)<<endl;		//Print next GP Seq
		}
		cin>>a1>>a2>>a3;
	}
	return 0;
}
