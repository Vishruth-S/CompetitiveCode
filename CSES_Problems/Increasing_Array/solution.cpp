/*


*/

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
            count = count  + max(0, v[i]-v[i+1]);
            if (v[i+1]<v[i]) v[i+1] = v[i];
        }
        cout<<count;
    }
    else{
        cout<<"0";
    }
}
