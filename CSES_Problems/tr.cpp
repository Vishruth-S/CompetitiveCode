#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){    
        int n;
        cin>>n;
        int k;
        int arr[n];
        for(int i = 0; i<n ;i++){
            cin>>arr[i];
        sort(arr, arr+n);    
        queue<int> cur;
        stack<int> temp;
        int tot = 0;
        int f = 0;
        for(int i = 0; i<n ;i++){
            f += arr[i];
            tot += arr[i];
            if(tot==0){
                temp.push(arr[i]);
                tot -= arr[i];
                }
            else
                cur.push(arr[i]);
                int u = tot;
                while(!temp.empty()){
                    u += temp.top();
                    if(u!=0){
                        cur.push(temp.top());
                        temp.pop();
                        tot = u;
                    }
                    else
                        break;
                }    
        }
        if(!temp.empty())
            cout<<"NO";
        else{
            cout<<"YES"<<"\n";
            while(!cur.empty()){
                cout<<cur.front()<<" ";
                cur.pop();
            }
        }    
        cout<<"\n";

        }
    }
}    