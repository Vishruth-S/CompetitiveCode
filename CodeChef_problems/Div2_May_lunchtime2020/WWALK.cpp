#include<bits/stdc++.h>
using namespace std;
#define int long long

inline void scan(int &x) 
{ 
	x = 0; 
	bool neg = 0; 
	register int c = getchar_unlocked(); 
	if (c == '-') 
		neg = 1, c = getchar_unlocked(); 
	while ((c < 48) || (c > 57)) 
		c = getchar(); 
	for ( ; c < 48||c > 57 ; c = getchar_unlocked()); 
	for ( ; c > 47 && c < 58; c = getchar_unlocked() ) 
		x= (x << 3) + ( x << 1 ) + ( c & 15 ); 
	if (neg) x *= -1; 
}

int32_t main() {
	//ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T;
	cin>>T;
	while(T--){
		int N;
		//cin>>N;
		scan(N);
		int alice[N];
		int bob[N];
		for(int i =0;i<N;i++){
		    //cin>>alice[i];
		    scan(alice[i]);
		}
		for(int i =0;i<N;i++){
		    //cin>>bob[i];
		    scan(bob[i]);
		}
		int ad=0,bd=0,wd=0;    
		for(int i =0;i<N;i++){
		    ad+=alice[i];
		    bd+=bob[i];
		    //cout<<"ad="<<ad<<"bd="<<bd<<endl;
		    if((alice[i] == bob[i] )&&(ad == bd)){
		        wd+=alice[i];
		    }
		}
		cout<< wd <<"\n";
	}
	return 0;
}
