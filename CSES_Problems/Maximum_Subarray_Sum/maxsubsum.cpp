//MAximum subarray sum
#include<bits/stdc++.h>
using namespace std;

//Kaden's Algorithm's
int main(){
    int n;
    cin>>n;
    long long arr[n];
    for(int i = 0 ;i<n ;i++)
        cin>>arr[i];

    long long maxVal = arr[0];
    long long curr_max = arr[0];

    for(int i = 1 ; i<n ;i++){
        curr_max = max(curr_max+arr[i], arr[i]);
        maxVal = max(maxVal, curr_max); 
    }
    cout<<maxVal;    
    cout<<"\n";
    

}