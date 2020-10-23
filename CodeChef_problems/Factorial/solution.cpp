//The logic behind the solution is counting the number of times a power of 5
//occurs in the Factorial of the given number
//The times multiples of 5 occurs will contribute 1 trailing zero
//The times multiples of 25 occurs will contribute 2 trailing zeros
//The times multiples of 125 occurs will contribute 3 trailing zeros
//The times multiples of 625 occurs will contribute 4 trailing zeros... and so on...
//We will continue counting till the number of times a multiple of any power of 5 becomes 0
//Finally adding number of multiples of 5 will result in adding the number of 1 zeros..
//Then on adding the multiples of 25 will result in adding the number of 2 zeros as 1 zero was previously added with the multiples of 5
//Thus we get the total number of trailing zeros

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){ //running for all number of testcases
        int num, x=5;
        cin >> num;
        long long int ans = 0;
        while (num/x!=0){//checking while the number contains multiples of x (any power of 5)
            ans = ans + num/x;
            x = x*5;//next power of 5
        }
        cout << ans << "\n";
    }
}
