    /**   Created by: Humberto Yusta
          Codeforces User: humbertoyusta
          Country: Cuba
          Copyright��                    */
#include<bits/stdc++.h>
using namespace std;
/// Macros:
#define int long long
#define f first
#define s second
#define db(x) cerr << #x << ": " << (x) << '\n';
#define pb push_back
#define lb lower_bound
#define up upper_bound
#define all(x) x.begin() , x.end()
#define rall(x) x.rbegin() , x.rend()
#define enl '\n'
typedef pair<int,int> ii;
typedef long double ld;
typedef unsigned long long ull;
/// Constraints:
const int maxn = 200010;
const int mod = 1000000000;
const ld eps = 1e-9;
const int inf = ((1ll<<31ll)-1ll);
const int INF = 2000000000000000000ll;
const ld pi = acos(-1);
/// Prime Numbers:
// 2, 173, 179, 181, 197, 311, 331, 737, 1009, 2011, 2027, 3079, 4001, 10037, 10079, 20011, 20089;
// 100003, 100019, 100043, 200003, 200017, 1000003, 1000033, 1000037, 1000081;
// 2000003, 2000029, 2000039, 1000000007, 1000000021, 2000000099;
/// Functions:
#define lg2(x) 31 - __builtin_clz(x)
#define lgx(x,b) ( log(x) / log(b) )
/// Red-Black Tree Template ---------------------------------
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//typedef tree < long long ,  null_type ,  less<long long> ,  rb_tree_tag ,  tree_order_statistics_node_update > ordered_set;
/// Quick Pow------------------------------------------------
int qpow(int b,int e){
    if( !e ) return 1;
    if( e & 1 ) return qpow(b,e-1) * b;
    int pwur = qpow(b,e>>1);
    return pwur * pwur;
}
int modinv(int x){
    return qpow(x,mod-2);
}
/// My Code -------------------------------------------------

int tc, n, a[maxn], abi[maxn];
vector<ii> compress;

void update(int id,int val){
    for( ; id < maxn ; id += ( id & -id ) )
        abi[id] += val;
}

int query(int id){
    int res = 0;
    for( ; id > 0; id -= ( id & -id ) )
        res += abi[id];
    return res;
}

int f(int midd){
    int res = 0;
    int r = 1;
    update(a[1],1);
    int tmp = 0;
    //update(a[1],1);
    for(int l=1; l<=n; l++){
        while( tmp + query(maxn-1) - query(a[r+1]) <= midd && r + 1 <= n ){
            r++;
            tmp += query(maxn-1) - query(a[r]);
            update(a[r],1);
        }//db(l)db(r)
        res += ( r - l + 1  );
        tmp -= ( query(a[l]-1) );
        update(a[l],-1);
    }
    return res;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cout.setf(ios::fixed); cout.precision(0);
    srand(time(NULL));

    //freopen("a.in","r",stdin);
//    freopen("a.out","w",stdout);

    cin >> tc;
    while( tc-- ){

        cin >> n;
        compress.clear();
        compress.pb({-1,-1});
        int cnt = 0;
        for(int i=1; i<=n; i++){
            cin >> a[i];
            compress.pb({a[i],i});
        }
        sort(all(compress));
        for(int i=1; i<compress.size(); i++){
            if( compress[i].f != compress[i-1].f ) cnt++;
            a[compress[i].s] = cnt;
        }

        int l = 1, r = 100000000000ll;
        while( l < r ){
            int mi = ( l + r ) >> 1;
            if( f(mi) < ( ( n ) * ( n + 1 ) / 2 + 1 ) / 2 ) l = mi + 1;
                else r = mi;
        }
        if( f(l) < ( ( n ) * ( n + 1 ) / 2 + 1 ) / 2 ) l++;
        if( f(l-1) >= ( ( n ) * ( n + 1 ) / 2 + 1 ) / 2 ) l--;
        //db(f(l))
//db(f(1))
        cout << l << '\n';
    }

    return 0;
}
