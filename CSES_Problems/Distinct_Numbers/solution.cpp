#include <bits/stdc++.h>
using namespace std;
#define int long long

/*
        Idea is simple, if we want to find the distinct numbers in the array, 
        We can insert all the elements in the set and simply return the size of the set. 
*/

signed main() {
        int n;
        cin >> n;
        set<int> s;
        for(int i = 0; i < n; i++) {
                int x;
                cin >> x;
                s.insert(x);
        }
        cout << (int)s.size() <<"\n";
        return 0;
}
