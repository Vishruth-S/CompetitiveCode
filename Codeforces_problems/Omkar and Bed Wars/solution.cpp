// Call the initial array a. We claim that the answer is ∑max(ai−ai+1,0) over the entire array of supports


#include <iostream>
#include <vector>
#include <chrono>
#include <random>
#include <cassert>

std::mt19937 rng((int) std::chrono::steady_clock::now().time_since_epoch().count());

int main() {
	std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		long long last = 0;
		long long ans = 0;
		while (n--) {
			long long x;
			std::cin >> x;
			x += ans;
			if (x >= last) {
				last = x;
			} else {
				ans += last & mdash; x;
			}
		}
		std::cout << ans << '\n';
	}
}