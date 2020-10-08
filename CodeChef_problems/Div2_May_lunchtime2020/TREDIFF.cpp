#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define sz(curr) ((int)(curr).size())
#define all(curr) (curr).begin(),(curr).end()
#define mp make_pair
 
using namespace std;

const int N = 2e5 + 2;
int a[N];
class SegmentTree{
  int *tree , *lazy;
  public:
  SegmentTree(){
    tree = new int[4 * N];
    lazy = new int[4 * N];
  } 
  void build(int , int  , int);
  int query(int , int , int , int , int );
  void update(int , int , int , int ,int ,int );
};
void SegmentTree :: build(int id , int start , int end){
  if(start > end) return;
  if(start == end){
    tree[id] = a[start];
    return;
  }
  int mid = (start + end) >> 1;
  build(2 * id , start , mid);
  build(2 * id + 1 , mid + 1 , end);
  tree[id] = tree[2*id + 1] + tree[2 *id];
}

int SegmentTree :: query(int id , int start , int end , int qs , int qe){
  if(start > end || start > qe || end < qs) return 0;
  if(lazy[id] != 0){
     tree[id] += lazy[id];
     if(start != end){
       lazy[2*id] += lazy[id];
       lazy[2*id + 1] += lazy[id];
     }
    lazy[id] = 0;
  }
  if(start >= qs && end <= qe){
    return tree[id];
  }
  int mid = (start + end) >> 1;
  int L = query(2 * id , start , mid , qs , qe);
  int R = query(2 * id + 1 , mid + 1 , end , qs , qe);
  return L + R;
}

void SegmentTree :: update(int id , int start , int end , int qs , int qe ,int val ){
  if(lazy[id] != 0){
    tree[id] += lazy[id];
    if(start != end){
      lazy[2*id] += lazy[id];
      lazy[2*id + 1] += lazy[id];
    }
    lazy[id] = 0;
  }
  if(start > end || start > qe || end < qs) return;
  if(start >= qs && end <= qe){
    tree[id] += val;
    if(start != end){
      lazy[2*id] += val;
      lazy[2*id + 1] += val;
    }
    return ;
  }
  int mid = (start + end ) >> 1;
  update(2*id , start , mid , qs , qe , val);
  update(2*id + 1 , mid + 1 , end ,qs , qe , val );
  tree[id] = tree[2*id] + tree[2*id + 1];
}
const int LOG = 19;
std::vector <int> v[N];
int par[N] , level[N];
int dp[N][LOG]; // ancestor of node u at a 2 ^ j distance
//int visit[N];

void dfs(int src , int p){
	if(p!=-1)
  	level[src] = level[p] + 1;
  dp[src][0] = p;
  //visit[src] = 1;
  par[src] = p;
  for(auto x : v[src]){
    if(x!=p)
      dfs(x , src);
  }
}

int getLCA(int u , int v){
  if(level[v] > level[u]) swap(u , v);
  int lp = 0;
  int k = level[u] - level[v];
  int dis = 0;
  for(int i = 0 ; i < LOG ; i++){
      if(k & (1 << i)){
        dis+=(1 << i);
      }
  }
  for(int i = 0 ; i < LOG ; i++){
    if(dis & (1 << i)){
      u = dp[u][i];
    }
  }
  if(v == u) return u;

  for(int i = LOG - 1 ; i >= 0 ; i--){
    if(dp[u][i] != -1 and dp[v][i] != -1 and dp[u][i] != dp[v][i]){
      u = dp[u][i];
      v = dp[v][i];
    }
  }
  return dp[u][0];
}

int dure(int u,int v){
  return level[u] + level[v] - 2*level[getLCA(u,v)];
}

void LCA(int n){
 dfs(1 , -1);
 for(int i = 1 ; i < LOG ; i++){
  for(int j = 1 ; j <= n ; j++){
    if(dp[j][i - 1] != -1){
       dp[j][i] = dp[dp[j][i - 1]][i - 1];
    }
  }
 }
}

//int freq[150];

class TaskB {
 public:
    int n , q;

    int err(int x , int y){
        std::vector<int> tt;
        int node = x;
        int lca = getLCA(x , y);
        while(node != lca){tt.pb(a[node]);node = par[node];}
        node = y;
        while(node != lca){ tt.pb(a[node]); node = par[node];}
       // ++freq[a[lca]];
        tt.push_back(a[lca]);
        int res = N;
        sort(tt.begin() , tt.end());
        int jj = (int)tt.size();
        for(int i = 0 ; i < jj - 1 ; i++){
            res = min(res , abs(tt[i + 1] - tt[i]));
        }
        return res;        
    }
void solveOne(istream &in, ostream &out) {
        memset(par , 0 , sizeof par);
        memset(level , 0 , sizeof level);
        memset(dp , 0 , sizeof dp);
        in >> n >> q;
        for(int i = 1 ; i <= n ; i++){
            in >> a[i];
            v[i].clear();
        }
        for(int i = 0 ; i < n - 1 ; i++){
            int x , y;
            in >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        LCA(n);
        int x , y;
        for(int i = 0 ; i < q ; i++){
            in >> x >> y;
            int distance = dure(x , y);
            if(distance > 200){
                out << 0 << "\n";
            }else{
               // for(int i = 0 ; i < 150 ; i++) freq[i] = 0;
                out << err(x , y) <<"\n";
             }
        }
    }
  void solve(std::istream &in, std::ostream &out) {
    int nt;
    in >> nt;
    for (int it = 0; it < nt; ++it) {
      solveOne(in, out);
    }
  }
};
 
 
int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  TaskB solver;
  std::istream& in(std::cin);
  std::ostream& out(std::cout);
  solver.solve(in, out);
  return 0;
}