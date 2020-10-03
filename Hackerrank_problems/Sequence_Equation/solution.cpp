#include<bits/stdc++.h>
using namespace std;

vector<int> permutationEquation(vector<int> v) {
    int n=v.size();
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[v[i]]=i+1;
    }
    vector<int> ans;
    for(int i=1;i<=n;i++){
        int mi= mp[i];
        int mmi = mp[mi];
        ans.push_back(mmi);
    }
    return ans;
}

int main(){}