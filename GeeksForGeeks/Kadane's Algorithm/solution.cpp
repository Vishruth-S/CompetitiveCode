#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t; //no. of testcases 
    while(t!=0)
    {
        int n;
        cin>>n; //enter size of array
      
        for(i=0; i<n; i++)
        cin>>arr[i]; //take array input
	 int curr_max=arr[0],global_max=arr[0];
        for(i=1; i<n; i++)
        {
           curr_max=max(curr_max+arr[i],arr[i]);
	   global_max=max(global_max,curr_max);
        }
        cout<<global_max<<endl;
	 t--;
  
        
    }
	return 0;
}
