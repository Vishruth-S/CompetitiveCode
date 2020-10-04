#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x,y,k,infect=0;
	    cin>>n>>k>>x>>y;
	    int i = n;
        while(i--){
            if(x == y){
                cout<<"YES"<<endl;
                infect = 1;
                break;
            }
            x = (x+k)%n;
        }
	    if(!infect){
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}