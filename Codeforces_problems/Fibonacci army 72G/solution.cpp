#include<bits/stdc++.h>
using namespace std;
 
int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(1);

    for(int i=2 ;i<21;i++){
        v.push_back(v[i-2]+v[i-1]);
    }

    // V is vector that store the first 20 fibonacci number 

    int n;

    cin>>n;

    // Now we return the wanted number in position n
    cout<<v[n]<<endl;

    return 0;
}