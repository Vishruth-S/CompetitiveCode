/*
using PnC and recursion to solve the problem
for n = 1 the answer is 1 (P1 D1)

for n = 2
for we will place P1 D1. Now for P2, D2 lets place P2 before P1 it becomes P2 P1 D1. D2 can be placed
for 3 position P2 _ P1 _ D2 _ (in these 3 dashes). 
If P2 is placed after P1 then D2 will have 2 Places. P1 P2 _ D1 _ 
and if P2 is placed after D1 than D1 have 1 place
So for base case 1+2+3.

Notice that for each case the number of position is odd number.(like when n= 1 there is 1, for n = 2 the number of therms in series is 3, similarly for n = 3 the number of terms in series will be 5).
so let k = 2*n - 1.

applying AP formula we get k(k+1)/2 = n*(2*n-1);

we multiply this answer by all the combination of previous combination (basic rule of multiplication) to get the answer. this is done recursively.


*/


class Solution {
public:
    int countOrders(int n) {

        int mod = 1000000007;
        
        if(n == 1) return 1;
        long long int ans = ((long long int)countOrders(n-1)*(n*(2*n - 1)))%mod;
        return ans;
    }
};
