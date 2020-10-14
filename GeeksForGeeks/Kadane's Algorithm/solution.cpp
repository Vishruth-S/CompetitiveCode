#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t; //no. of testcases 
    while(t!=0)
    {
        int n;
        cin>>n; //enter size of array
        int i, e=0, f=INT_MIN, arr[n];
        for(i=0; i<n; i++)
        cin>>arr[i]; //take array input
        for(i=0; i<n; i++)
        {
           e=e+arr[i]; //to get maximum contiguous sum of array
           if(f<e)
           f=e; //updating f with maximum possible sum value
           if(e<0) //if sum (e) happens to be negative then reintialize sum (e) = 0
           e=0;
        }
        cout<<f<<endl;
        t--;
        
    }
	return 0;
}
