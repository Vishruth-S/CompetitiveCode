#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define vi vector<int>
#define vb vector<bool>
#define pii pair<int,int>
#define mod 1000000007
#define ss second
#define ff first
#define vpii vector<pii>
#define vvi vector<vi>
#define pb push_back
#define vs vector<string>
#define all(x) x.begin(),x.end()
#define mii map<int,int>
#define vd vector<double>
const int inf=0x3f3f3f3f3f3f3f3f;
int dx[]={0,1,1,1,0,-1,-1,-1};
int dy[]={1,1,0,-1,-1,-1,0,1};
void print(vi &v){
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;
}
int power(int a,int b){
    int res = 1;
    while(b!=0){
        if(b&1){
            res *= a; 
        }
        a = (a * a);
        b = (b / 2);
    }
    return res;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    // t = 1;
    while(t--){
        int n,m,i,j;
        cin>>n>>m;
        vvi a(n);
        mii mp;
        for(i=0;i<n;i++){
        	for(j=0;j<m;j++){
        		int in;
        		cin>>in;
        		mp[in]++;
        	}
        }
        stack<int> paired;
        stack<int> left;
        for(auto it:mp){
        	int x = it.ss/2,y = it.ss%2;
        	for(i=0;i<x;i++){
        		paired.push(it.ff);
        	}
        	if(y)left.push(it.ff);
        }
        int f = 0;
        for(i=0;i<n;i++){
        	vi v(m);
        	for(j=0;j<m/2;j++){
        		if(!paired.empty()){
        			int x = paired.top();
        			paired.pop();
        			v[j] = x;
        			v[m-j-1] = x;
        		}
        		else{
        			f = 1;
        			break;
        		}
        	}
        	if(f)break;
        	a[i] = v;
        }
        if(f){
        	cout<<-1<<endl;
        	continue;
        }
        if(m%2){
        	for(i=0;i<n;i++){
        		if(!paired.empty()){
        			int x = paired.top();
        			paired.pop();
        			a[i][m/2] = x;
        			a[i+1][m/2] = x;
        			i++;
        		}
        		else{
        			int x = left.top();
        			left.pop();
        			a[i][m/2] = x;
        		}
        	}
        }
        for(i=0;i<n;i++)print(a[i]);
    }
    return 0;
}