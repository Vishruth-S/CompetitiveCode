#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<long, long> &a, const pair<long, long> &b) 
{ 
    return (a.second < b.second); 
}
int main(){
    vector<pair<long, long>> v;
    int n;
    cin>>n;
    long long i,j;
    int m = n;
    while(n--){
        cin>>i>>j;
        v.push_back(make_pair(i,j));

    }
    sort(v.begin(), v.end());
    int count = 1;
    int k = 0;
    cout<<"----------------------------"<<endl;
    for(int i = 0; i<m ;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
        // if(v[k].second>v[i].first){
        //     count++;
        //     k=i;
        // }
    }
    cout<<count;

}