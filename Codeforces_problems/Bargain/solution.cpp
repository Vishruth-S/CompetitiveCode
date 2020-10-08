// Let's count for each digit how many times it will be included in the final sum and in what place.
// Let's denote m as the length of the number n. Consider the digit ai at the position i in the number n (1≤i≤m).
// If some part of the number to the left of the digit is removed, then the current digit will remain in its place  — and
// we add the number of ways to remove the subsegment to the left to the answer multiplied by the current digit i∗(i−1)/2×10m−i×ai.
// If the segment to the right is deleted, then the place of the digit will change – (j+1)×10j×ai for all 0≤j<m−i, or ∑m−i−1j=0(j+1)×10j×ai. The j sum can be pre-calculated for all values.

#include <algorithm>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define reunique(v) v.resize(std::unique(v.begin(), v.end()) - v.begin())
#define sz(v) ((int)(v).size())

#define vec1d(x) vector<x>
#define vec2d(x) vector<vec1d(x)>
#define vec3d(x) vector<vec2d(x)>
#define vec4d(x) vector<vec3d(x)>

#define ivec1d(x, n, v) vec1d(x)(n, v)
#define ivec2d(x, n, m, v) vec2d(x)(n, ivec1d(x, m, v))
#define ivec3d(x, n, m, k, v) vec3d(x)(n, ivec2d(x, m, k, v))
#define ivec4d(x, n, m, k, l, v) vec4d(x)(n, ivec3d(x, m, k, l, v))

#ifdef LOCAL
#include "pretty_print.h"
#define dbg(...) cerr << "[" << #__VA_ARGS__ << "]: ", debug_out(__VA_ARGS__)
#else
#define dbg(...) 42
#endif

#define nl "\n"

typedef long double ld;
typedef long long ll;
typedef unsigned long long ull;

template <typename T> T sqr(T x) { return x * x; }
template <typename T> T abs(T x) { return x < 0 ? -x : x; }
template <typename T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template <typename T> bool chmin(T &x, const T& y) { if (x > y) { x = y; return true; } return false; }
template <typename T> bool chmax(T &x, const T& y) { if (x < y) { x = y; return true; } return false; }

auto random_address = [] { char *p = new char; delete p; return (uint64_t) p; };
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count() * (random_address() | 1));
mt19937_64 rngll(chrono::steady_clock::now().time_since_epoch().count() * (random_address() | 1));


int main(int /* argc */, char** /* argv */)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifdef LOCAL
	assert(freopen("i.txt", "r", stdin));
	assert(freopen("o.txt", "w", stdout));
#endif

	string s;
	cin >> s;

	int n = s.size();
	vector<ll> a(n);
	for (int i = 0; i < n; ++i) {
		a[i] = s[i] - '0';
	}

	const int MOD = (int)1e+9 + 7;

	ll ans = 0;
	ll sum = 0;
	ll p = 1;

	for (ll i = n - 1; i >= 0; --i) {
		ll k = (i * (i + 1) / 2 % MOD * p % MOD + sum) % MOD;
		sum = (sum + p * (n - i) % MOD) % MOD;
		p = p * 10 % MOD;
		ans = (ans + a[i] * k % MOD) % MOD;
	}

	cout << ans << endl;

#ifdef LOCAL
	cerr << "Time execute: " << clock() / (double)CLOCKS_PER_SEC << " sec" << endl;
#endif
	return 0;
}