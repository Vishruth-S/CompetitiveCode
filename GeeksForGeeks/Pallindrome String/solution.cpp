#include <bits/stdc++.h>
using namespace std;
//used goto statments for exiting loops on first mismatch. Hence reducing time complexity for larger aount of test cases.
int main() {
	int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<char> st;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(st.empty()) st.push(s[i]);
            else if(s[i]=='(' || s[i]=='[' || s[i]=='{') st.push(s[i]);
            else if(s[i]==')'){
                if(st.top()=='(') st.pop();
                else {
                    cout << "not balanced" << endl;
                    goto last;
                }
            }
            else if(s[i]==']'){
                if(st.top()=='[') st.pop();
                else {
                    cout << "not balanced" << endl;
                    goto last;
                }
            }
            else if(s[i]=='}'){
                if(st.top()=='{') st.pop();
                else {
                    cout << "not balanced" << endl;
                    goto last;
                }
            }
        }
        // cout << st.size() << endl;
        if(st.size()==0) cout << "balanced" << endl;
        else cout << "not balanced" << endl;
        last:
            continue;
    }
	return 0;
}