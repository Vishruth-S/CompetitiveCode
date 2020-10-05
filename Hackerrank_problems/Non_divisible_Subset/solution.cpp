// Time complexity : O(n+k)
// Problem Tags : Implementation,Number Theory 

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

void cp(){
    int tmp=0,n,k;
    cin>>n>>k;                              // size of the array and the number k taken as input     
    ll a[n];                
    for(int i=0;i<n;i++)
        cin>>a[i];                          // input the array elements 
    for(int i=0;i<n;i++)
        a[i] %=k;                           // array elements are replaced by their remainder with k 
    
    ll hm[k];                               // hashmap of size k is constructed and initialised to 0 
    memset(hm,0,sizeof(hm));
    
    for(ll i=0;i<n;i++){
        hm[a[i]]++;             
    }

    if(hm[0]!=0){                           // if the 0th element is not zero then it counts in the subset
            tmp++;
    }

    if(k%2==0){                             // for even value of k we have 
        for(ll i=1;i<(k/2);i++){            // we tend to take one of the two values 
            tmp+= max(hm[i],hm[k-i]);       // the two values being ith element and (k-i)th element 
        }                                   // as the presence of mere one of them will prevent the entire subset from being divisible 

        if(hm[k/2]!=0)                      // if the middlemost element is non zero then it is separately counted 
            tmp++;    
    }

    if(k%2!=0){
        for(ll i=1;i<=(k/2);i++){           // same process being repeated when k is odd 
            tmp+= max(hm[i],hm[k-i]);
        }
    }                                       // only difference is the middle most element won't count here.

    cout<<tmp<<endl;                        // the required size of the subset 
    return ;

}


int main(){
    cp();                                   // function being called inside the main function 
    return 0;
}



// TEST 1 : 
// input : 
// 4 3 
// 1 7 2 4 
// output : 
// 3 


// TEST 2 : 
// input : 
// 7 4
// 19 10 12 10 24 25 22 
// output : 
// 3 