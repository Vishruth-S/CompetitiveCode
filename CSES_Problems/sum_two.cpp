#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n; 
    cin>>n;
    if(n>2){
    if(n%2==0)
        cout<<"YES";
    else
        cout<<"NO";

    }
    else
        cout<<"NO";
}




// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     long long x;
//     cin>>n>>x;
//     set<int> st;
//     long long k;
//     unordered_set<int> s;
//     for(int i = 0; i<n ;i++){
//         cin>>k;
//         s.insert(k);
//     }
//     int m;
//     int count = 0;
//     for(auto i: s){
//         count++;
//         if(s.find(x-i)!=s.end()){
//             st.insert(count);
//             m = i;
//             break;
//         }
//         else
//             m = 0;       
//     }
//     if(m!=0){
//         int l = x - m;
//         auto it = distance(s.begin(), s.find(l));
//         st.insert(it);
//         for(auto i : st)
//             cout<<i+1<<" ";
//     }
//     else
//         cout<<"IMPOSSIBLE";
// }