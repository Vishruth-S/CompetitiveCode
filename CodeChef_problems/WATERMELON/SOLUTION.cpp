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
//i have taken an array with increased size because sometimes tight arrays throws bound error
//and in this case it was    

	    for(int i=0;i<n;i++){
	        cin>> arr[i];
	        sum=sum+arr[i];
	    }
//then i stored the sum of array elements in a variable sum
//if it was greater or equal to zero the output says YES
	    if(sum>=0){
	        cout<<"YES"<<endl;
	    }
//else no

	    else{
	        cout<<"NO"<<endl;
	    }
	    
	    
	}
	return 0;
}