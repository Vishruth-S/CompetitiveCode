#include<bits/stdc++.h>
using namespace std;
#define jaadu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef unsigned long long int uli;
int main()
{
	jaadu;
	int n;
	cin>>n;						//Input N : No. of candy packets
	while(n!= -1){					//Loop until the end of input(denoted by -1)
		vector<int>arr(n);
		uli sum =0;
		for(int i=0;i<n;i++){
			cin>>arr[i];			//Input no. of candies in each packet.
			sum += arr[i];			//Count total no. of candies.
		}
		if(sum%n != 0)cout<<-1<<endl;		//If n is not divisible by total candies, then even distribution is not possible. Hence, print -1.
		else{
			int res = 0;
			int p = sum/n;			//No. of candies each should have
			for(int i=0;i<n;i++){
				if(p- arr[i] >0 ){	//Calculate no. candies, teacher has to move from bigger packet to smaller.
					res += p- arr[i];
				}
			}
			cout<<res<<endl;		//Print result
		}
		cin>>n;
	}
	return 0;
}
