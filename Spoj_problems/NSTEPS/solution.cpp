#include<bits/stdc++.h>
using namespace std;
#define jaadu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef unsigned long long int uli;
/*
	Here, in this method, we will solve this problem using a odd and even pattern.
	And, we will check if the given x,y points lies on line x=y or x-y=2
*/
int solve(int x, int y){
	if(x-y==0 && y%2==0){			//line is x=y and even pattern
		return y*2;
	}
	else if(x-y ==0 && y%2 !=0 ){		//line is x=y and odd pattern
		return (y-1)*2 + 1;
	}
	else if(x-y == 2 && y%2 != 0){		//line is x-y=2 and odd pattern
		return y*2 + 1;
	}
	else if(x-y == 2 && y%2 == 0){		//line is x-y=2 and even pattern
		return y*2 + 2;
	}
	else return -1;				//no point is there
}
int main()
{
	jaadu;
	int t;
	cin>>t;
	while(t--){
		int x,y;
		cin>>x>>y;
		int res = solve(x,y);
		if(res == -1)cout<<"No Number"<<endl;
		else{
			cout<<res<<endl;
		}
	}
	return 0;
}
