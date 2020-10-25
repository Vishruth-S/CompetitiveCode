/*
 * Uses DFS logic.
 * This code runs on the principle of recursive programming,
 * with base condition that any no pair of number will not go
 * above 10 operations as digitsum (D*10) = digitsum (D),
 * thereby limiting the number of rounds to be recursed.
 * It recursively searches all the possible combinations of
 * operations possible allowed i.e. digitsum(N) and N+D
 * and updates the minimum value reached and how long the
 * combination of operation was needed.
 *
 */

#include <iostream>
#include <unordered_map>
#include <climits>

using namespace std;

#define ll long long


class mindsum {
private:
		ll n , d, min, op, op_min, cp, k;
		unordered_map <ll,bool> oc;
		unordered_map <ll,bool> :: iterator it;
		/*Calculates the sum of the digits*/
		ll digitsum(ll k) {
			ll res = 0;
			while (k) {
				res += k%10;
				k = k/10;
			}
			return res;
		}
		/*Recursively calls the valid operations i.e. digitsum(N) or N+D */
		void recurse(ll m, ll count) {
			if(min > m ){
				min = m;
				op_min = count;
			}
			else if(min == m && op_min > count) {
				op_min = count;
			}

			if(11 <= count) {
				return;
			}

			recurse(digitsum(m), count+1);
			recurse(m+d, count+1);
			
		}
public:
		/*this function adds numer N to a map and initialized the values of class members. */
		mindsum(ll _n, ll _d) {
			n = _n;
			d = _d;
			min = n;
			op = 0;
			op_min = 0;//LONG_MAX;
			oc.insert({{n,false}});
		}

		void findMinSum() {
			recurse(digitsum(n),1);
			recurse(n+d, 1);
			return;
		}
		void printOutput() {
			cout << min << " " << op_min << endl;
		}
};


int main() {
	int test = 0;
	ll  N,D;
	cin >> test ;
	while(test--) {
		cin >> N >> D;
		mindsum *m = new mindsum(N,D);
		m->findMinSum();
		m->printOutput();
		delete(m);
	}
	return 0;
}

