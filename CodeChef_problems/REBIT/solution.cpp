#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define MOD 998244353
using namespace std;

ll fast_pow(ll base, ll n,ll M)
{
    if(n==0)
       return 1;
    if(n==1)
    return base;
    ll halfn=fast_pow(base,n/2,M);
    if(n%2==0)
        return ( halfn * halfn ) % M;
    else
        return ( ( ( halfn * halfn ) % M ) * base ) % M;
}
ll findMMI_fermat(ll n,ll M, ll times)
{
    times = times * (M-2);
    return fast_pow(n,times,M);
}

int main()
{
    ll t;
    cin>>t;
    
    while(t--){
        string s;
        cin>>s;
        ll len = s.length();

        // Converting to postfix;
        stack< char > st;
        string postFix;
        map< char, int > precedence;
        precedence.insert(make_pair('|', 0));
        precedence.insert(make_pair('&', 1));
        precedence.insert(make_pair('^', 2));

        for(ll i=0; i<len; i++){
            if(s[i] == '#')
                postFix.push_back('#');
            else if(s[i] == '(')
                st.push('(');
            else if(s[i] == ')'){
                while(!st.empty() && st.top() != '('){
                    char c = st.top();
                    postFix.push_back(c);
                    st.pop();
                }
                st.pop();
            }else{
                int pre = precedence[s[i]];
                while(!st.empty() && st.top() != '(' && precedence[st.top()] >= pre){
                    char c = st.top();
                    postFix.push_back(c);
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            postFix.push_back(st.top());
            st.pop();
        }
        // Evaluating Postfix;

        len = postFix.length();
        ll count = 0;
        stack< vector< ll > > count_all;
        if(len == 0){
            printf("0 0 0 0\n");
            continue;
        }
        if(len == 1){
            vector< ll > v;
            v.push_back(1);
            v.push_back(1);
            v.push_back(1);
            v.push_back(1);
            v.push_back(4);

            count_all.push(v);
            count = 1;
        }else{
            vector< ll > v;
            v.push_back(1);
            v.push_back(1);
            v.push_back(1);
            v.push_back(1);
            v.push_back(4);
            for(ll i=0; i<len; i++){
                if(postFix[i] == '#'){
                    count_all.push(v);
                    count++;
                    continue;
                }
                else{
                    vector< ll > v1 = count_all.top();
                    count_all.pop();
                    vector< ll > v2 = count_all.top();
                    count_all.pop();
                    if(postFix[i] == '&'){
                        ll Count_0 = ((v2[0] * v1[4])%MOD + (v2[1] * v1[0])%MOD + (v2[2] * v1[0])%MOD + (v2[2] * v1[3])%MOD + (v2[3] * v1[0])%MOD + (v2[3] * v1[2])%MOD)%MOD;
                        ll Count_1 = (v2[1] * v1[1])%MOD;
                        ll Count_a = ((v2[1] * v1[2])%MOD + (v2[2] * v1[1])%MOD + (v2[2] * v1[2])%MOD)%MOD;
                        ll Count_A = ((v2[1] * v1[3])%MOD + (v2[3] * v1[1])%MOD + (v2[3] * v1[3])%MOD)%MOD;

                        v1[0] = Count_0;
                        v1[1] = Count_1;
                        v1[2] = Count_a;
                        v1[3] = Count_A;
                        v1[4] = v1[0] + v1[1] + v1[2] + v1[3];
                        count_all.push(v1);
                    }else if(postFix[i] == '|'){
                        ll Count_0 = (v2[0] * v1[0])%MOD;
                        ll Count_1 = ((v2[0] * v1[1])%MOD + (v2[1] * v1[4])%MOD + (v2[2] * v1[1])%MOD + (v2[2] * v1[3])%MOD + (v2[3] * v1[1])%MOD + (v2[3] * v1[2])%MOD)%MOD;
                        ll Count_a = ((v2[0] * v1[2])%MOD + (v2[2] * v1[0])%MOD + (v2[2] * v1[2])%MOD)%MOD;
                        ll Count_A = ((v2[0] * v1[3])%MOD + (v2[3] * v1[0])%MOD + (v2[3] * v1[3])%MOD)%MOD;

                        v1[0] = Count_0;
                        v1[1] = Count_1;
                        v1[2] = Count_a;
                        v1[3] = Count_A;
                        v1[4] = v1[0] + v1[1] + v1[2] + v1[3];
                        count_all.push(v1);
                    }else{
                        ll Count_0 = ((v2[0] * v1[0])%MOD + (v2[1] * v1[1])%MOD + (v2[2] * v1[2])%MOD + (v2[3] * v1[3])%MOD)%MOD;
                        ll Count_1 = ((v2[0] * v1[1])%MOD + (v2[1] * v1[0])%MOD + (v2[2] * v1[3])%MOD + (v2[3] * v1[2])%MOD)%MOD;
                        ll Count_a = ((v2[0] * v1[2])%MOD + (v2[1] * v1[3])%MOD + (v2[2] * v1[0])%MOD + (v2[3] * v1[1])%MOD)%MOD;
                        ll Count_A = ((v2[0] * v1[3])%MOD + (v2[1] * v1[2])%MOD + (v2[2] * v1[1])%MOD + (v2[3] * v1[0])%MOD)%MOD;

                        v1[0] = Count_0;
                        v1[1] = Count_1;
                        v1[2] = Count_a;
                        v1[3] = Count_A;
                        v1[4] = v1[0] + v1[1] + v1[2] + v1[3];
                        count_all.push(v1);
                    }
                    
                }
            }
        }

        vector< ll > ans = count_all.top();
        
        ll inv_cur = findMMI_fermat(4, MOD, count);
        ans[0] = ((ans[0]%MOD)*(inv_cur%MOD))%MOD;
        ans[1] = ((ans[1]%MOD)*(inv_cur%MOD))%MOD;
        ans[2] = ((ans[2]%MOD)*(inv_cur%MOD))%MOD;
        ans[3] = ((ans[3]%MOD)*(inv_cur%MOD))%MOD;

        cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<" "<<ans[3]<<endl;
    }
    return 0;
}
