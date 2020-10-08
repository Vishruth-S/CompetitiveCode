#include <iostream>
using namespace std;
#include<bits/stdc++.h>
bool com( pair<char,vector<int>>& a, pair<char,vector<int>>& b ){
    return a.first>b.first;
}


int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int k=0;k<t;k++){
	    long long int n;
	    cin>>n;
	    string a,b;
	    cin>>a;
	    cin>>b;
	    vector<pair<char,vector<int>>> arr;
	    pair<char,vector<int>> has;
	    map<char,vector<int>> h;
	    map<char,int> mp;
	    map<char,vector<int>> fun;
	    int f=0;
	    for(int i=0;i<n;i++){
	        if(a[i] != b[i]){
	            if(a[i]<b[i]){
	                f=1;
	                break;
	            }
	            h[b[i]].push_back(i);
	        }
	        mp[a[i]]=i;
	    }
	    for(auto i:h){
	        arr.push_back(make_pair(i.first,i.second));
	    }
	    sort(arr.begin(),arr.end(),com);
	    
	    vector<string> ans;
	    int flag=0;
	    vector<int> tem;
	    for(auto i :arr){
	        if(mp.find(i.first) !=mp.end()){
	            tem=i.second;
	            int x=tem.size();
	            tem.push_back(mp[i.first]);
	            sort(tem.begin(),tem.end());
	            string r=to_string(x+1);
	            for(int d=0;d<tem.size();d++){
	                a[d]=i.first;
	                r+=" "+to_string(tem[d]);
	            }
	            ans.push_back(r);
	            mp.clear();
	            for(int u=0;u<n;u++){
	                mp[a[u]]=u;
	            }
	            //cout<<mp['a'][0];
	            
	        }
	        else{
	            flag=1;
	            break;
	        }
	    }
	    
	    if(flag==1 || f==1){
	        cout<<-1<<endl;
	    }
	    else{
	        int g=ans.size();
	        cout<<g<<endl;
	        for(int p=0;p<g;p++){
	            for(int l=0;l<ans[p].size();l++){
	                cout<<ans[p][l];
	            }
	            cout<<endl;
	        }
	    }
	}
	
	return 0;
}
