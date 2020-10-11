// The idea is to convert each digit (lets call it num) to its maximum number whose product of factorials of its digits equals the factorial of this num
// examples:
// digit "0" and "1" , we will convert them to nothing (white space) because the maximum number needed shouldn't have zeroes or ones
// digit "2" , "3" , "5" , "7" remain the same.
// digit "4" will be converted to "322" as  4! = 3! * 2! * 2!
// digit "6" will be converted to "53" as 6! = 5! * 3!
// digit "8" will be converted to "7222" as 8! = 7! * 2! * 2! * 2!;
// digit "9" will be converted to "7332" as 9! = 7! * 3! * 3! * 2!;
// we will replace each digit from the given string to its corresponding maxmimum number, then we will sort it descendingly

#include<iostream>
#include<vector>
#include<algorithm>
#include <string>
#include <queue>
#include<map>
#include<cmath>
#include <iomanip>
#include <fstream>
#include<set>
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int digits;
	string str , res;
	cin >> digits;
	cin >> str;
	vector <string> vect{"","","2","3","322","5","53","7","7222","7332"};
	for (int i = 0; i < digits; i++) {
		res += vect[str[i] - '0'];
	}
	sort(res.rbegin(), res.rend());
	cout << res << endl;
	return 0;
}