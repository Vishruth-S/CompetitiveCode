#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 7;

struct seg {
    int y, l, r;

    bool operator < (const seg o) {
        return y < o.y;
    }
};

struct ev {
    int x, y, val;

    bool operator < (const ev o) {
        return y < o.y;
    }
};

long long bit[MAXN];

void update(int idx, int v) {
    idx++;
    while(idx < MAXN) {
        bit[idx] += v;
        idx += idx & -idx;
    }
}

long long query(int idx) {
    idx++;
    long long ans = 0;
    while(idx > 0) {
        ans += bit[idx];
        idx -= idx & -idx;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, m;
    cin >> n >> m;
    long long ans = 1;
    vector<seg> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].y >> v[i].l >> v[i].r;
        if (v[i].l == 0 && v[i].r == 1000000) ans++;
    }
    vector<ev> events;
    for (int i = 0; i < m; i++) {
        int x, l, r;
        cin >> x >> l >> r;
        if (l == 0 && r == 1000000) ans++;
        events.push_back({x, l, +1});
        events.push_back({x, r + 1, -1});
    }

    sort(v.begin(), v.end());
    sort(events.begin(), events.end());
    
    int j = 0;
    for (int i = 0; i < n; i++) {
        while (j < events.size() && events[j].y <= v[i].y) {
            update(events[j].x, events[j].val);
            j++;
        }
        ans += query(v[i].r) - query(v[i].l - 1);
    }
    cout << ans << '\n';
    return 0;
}