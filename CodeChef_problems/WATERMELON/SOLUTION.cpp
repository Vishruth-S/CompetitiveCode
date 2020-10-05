#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,sum=0;
	    cin>>n;
	    int arr[n+2];
	    

	    for(int i=0;i<n;i++){
	        cin>> arr[i];
	        sum=sum+arr[i];
	    }
	    if(sum>=0){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	    
	}
	return 0;
}