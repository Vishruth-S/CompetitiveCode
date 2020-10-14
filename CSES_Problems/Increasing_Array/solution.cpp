
/*Importing the libraries*/
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &i:v) cin>>i;
    if(n!=1){ 
        long long count = 0;
        for(int i = 0; i<n-1; i++){ 
            count = count  + max(0, v[i]-v[i+1]); //The difference between current_element and next element will be the number of time we have to increment.
                                                  
            if (v[i+1]<v[i]) v[i+1] = v[i]; // Here we update the next element which is the (i+1)th element, 
                                            // because after increment it must be equal to its previous element in account of minimum count.
        }
        cout<<count;
    }
    else{
        cout<<"0";
    }
}
