#include <bits/stdc++.h>
using namespace std;

void test_case() {
	int n, m;
	scanf("%d%d", &n, &m);
	vector<int> a(n);
	for(int i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
	
	int answer = INT_MAX;
	for(int rep = 0; rep < 2; ++rep) {
		int last_non_zero = -1;
		int turns = 0;
		bool increasing = true;
		int prv = a[0];
		if(prv == -1) {
			prv = 1;
		}
		else {
			last_non_zero = 0;
		}
		for(int i = 1; i < n; ++i) {
			if(a[i] != -1) {
				int j = last_non_zero;
				if(j != -1) {
					if((i-j)%2 != abs(a[i]-a[j])%2 || abs(a[i] - a[j]) > abs(i - j)) {
						puts("-1");
						return;
					}
				}
				last_non_zero = i;
			}
			if(increasing && prv == m) {
				turns++;
				increasing = !increasing;
			}
			else if(prv == 1 && !increasing) {
				turns++;
				increasing = !increasing;
			}
			if(increasing) {
				prv++;
			}
			else {
				prv--;
			}
			if(a[i] != -1) {
				if(increasing && (prv <= a[i])) {
					// fine
				}
				else if(!increasing && (prv >= a[i])) {
					// fine
				}
				else {
					turns++;
					increasing = !increasing;
				}
				prv = a[i];
			}
		}
		answer = min(answer, turns);
		for(int& x : a) {
			if(1 <= x && x <= m) {
				x = m + 1 - x;
			}
		}
	}
	printf("%d\n", answer);
}

int main() {
	int T;
	scanf("%d", &T);
	while(T--) {
		test_case();
	}
}

