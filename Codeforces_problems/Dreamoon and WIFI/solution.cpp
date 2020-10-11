// The idea is we need to calculate:
// How many '+' sign exists in both 1st string and 2nd string.
// How many '-' sign exists in both 1st string and 2nd string.
// How many '?' sign exists in 2nd string, if there is no '?' sign exist in the second string we need to check if number of '+' signs in
// 1st string equals to the number of '+' signs in 2nd string, we make the same check for '-' sign, if both conditions are true, it
// means that the probility equals one as the two strings have the same count of both '+' and '-' signs, else probility will be zero as
// both string have different count of either '+' or '-' signs.
// If '?' exists in 2nd string, we need to calculate how many '+' and '-' signs we need to add in the 2nd string, in order to
// calculate the number of ways of inserting both signs in 2nd string, since we care about the order of insertion and since we have only
// 2 signs, therefore there may be a reptition, we need to compute Permutations to calculate how many ways of insertions we can make in
// the 2nd string (factorial of totat num of '?' exists in 2nd string / (factorial of total num of '+' needed * factorial of total num of '-' needed))
// we also need to compute the total number of ways to insert both the 2 signs regardless how many '+' or how many '-' needed for 2nd string
// in order to calculate the probiblity needed.

#include<iostream>
#include<vector>
#include<algorithm>
#include <string>
#include<map>
#include<cmath>
#include <iomanip>
using namespace std;
long long int factorial(int n) {
	long long int result = 1;
	while (n != 0) {
		result *= n;
		n--;
	}
	return result;
}
int main() {
	string str1, str2;
	cin >> str1 >> str2;
	int count1Plus = count(str1.begin(), str1.end(), '+');
	int count1Minus = count(str1.begin(), str1.end(), '-');
	int count2Plus = count(str2.begin(), str2.end(), '+');
	int count2Minus = count(str2.begin(), str2.end(), '-');
	int count2Mark = str2.length() - (count2Plus + count2Minus);
	if (!count2Mark) {
		if (count2Plus == count1Plus && count2Minus == count1Minus) {
			cout << "1.000000000000";
			return 0;
		}
		else {
			cout << "0.000000000000";
			return 0;
		}
	}
	int diffPlus = count1Plus - count2Plus;
	int diffMinus = count1Minus - count2Minus;
	if (diffPlus + diffMinus == count2Mark && diffPlus >= 0 && diffMinus >=0) {
		long long int res = factorial(count2Mark);
		long long int res1 = factorial(diffPlus);
		long long int res2 = factorial(diffMinus);
		double result = (double)res /(double) (res1 * res2);
		long long int totalWays = pow(2, count2Mark);
		cout << fixed;
		cout << setprecision(12);
		cout << result / (double)totalWays;
	}
	else cout << "0.000000000000";
	return 0;
}