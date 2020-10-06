// n---> stores the array input or the weights of individual riding.
// x----> stores the weight limit of gondola.

// importing libraries
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    #Sorting the array
    sort(a, a+n);
    long long tot = 0;
    long long count = 0; // initialize the count variable to keep track of the reequired gondolas.
    if (n==1) cout<<"1";
    else{   
        int i=0,j=n-1;
        while(i<=j){
            tot=a[i]+a[j]; // In each iteration it is important to calculate the sum of i-th front and j-th back element. 
            if(tot<=x){
                count++;
                i++;
                j--;
                tot = 0;
            }
            else{
                j--;
                count++;
                tot = 0;
            }
        }
        cout<<count;
    }
}
