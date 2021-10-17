#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        
        if(s[0]==')' || s[s.length()-1]=='(' || s.length()%2==1){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;

//        if(s.length()%2==1){
//            cout<<"NO"<<endl;
//        }
//        else{
//            stack<char> st;
//            bool ans=true;
//            for(int i=0;i<s.length();++i){
//                if(s[i]=='(' || s[i]=='?'){
//                    st.push(s[i]);
//                }
//                else{
//                    if(st.empty() || st.top()==')'){
//                        ans=false;
//                        break;
//                    }
//                    else{
//                        st.pop();
//                    }
//                }
//            }
//            if(ans==false){
//                cout<<"NO"<<endl;
//            }
//            else{
//                ll count = 0;
//                while(!st.empty()){
//                    if(st.top()=='('){
//                        if(count==0){
//                            ans = false;
//                            break;
//                        }
//                        else{
//                            count--;
//                        }
//                    }
//                    else count++;
//                    st.pop();
//                }
//                if(ans==false){
//                    cout<<"NO"<<endl;
//                    continue;
//                }
//                if(count%2==0) ans=true;
//                else ans=false;
//                if(ans==true) cout<<"YES"<<endl;
//                else cout<<"NO"<<endl;
//            }
//        }
    }
    return 0;
}