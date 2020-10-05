/*
    The logic is to run the program a minimum number of times, i.e. n times in order
    to check if the city of spread reaches the desired city

    Thus we run the loop and increment x by k over n iterations to check if it ever equals k

    If it does, we set an infect tag and print "YES"
*/

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