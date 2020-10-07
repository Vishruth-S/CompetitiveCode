/*
    Created on Tue Oct  6 2020
    @author: lusmoura
*/

/*
We use an auxiliary variable to store the reversed number.
The original number is shifited to the left (by dividing by 10) so we can get the digits.
The auxiliary number is shifited to the right (by multiplying by 10) so we can add the digits.

Example:
x = 1234
aux = 0

Iteration 1:
digit = 4
aux = aux * 10 = 0 * 10 = 0
aux = aux + digit = 0 + 4 = 4
x = x/10 = 1234/10 = 123

Iteration 2:
digit = 3
aux = aux * 10 = 4 * 10 = 40
aux = aux + digit = 40 + 3 = 43
x = x/10 = 123/10 = 12

Iteration 3:
digit = 2
aux = aux * 10 = 43 * 10 = 430
aux = aux + digit = 430 + 2 = 432
x = x/10 = 12/10 = 1

Iteration 4:
digit = 1
aux = aux * 10 = 432 * 10 = 4320
aux = aux + digit = 4320 + 1 = 4321
x = x/10 = 1/10 = 0

Answer: 4321

Example:
x = 100
aux = 0

Iteration 1:
digit = 0
aux = aux * 10 = 0 * 10 = 0
aux = aux + digit = 0 + 0 = 0
x = x/10 = 100/10 = 10

Iteration 2:
digit = 0
aux = aux * 10 = 0 * 10 = 0
aux = aux + digit = 0 + 0 = 0
x = x/10 = 10/10 = 1

Iteration 3:
digit = 1
aux = aux * 10 = 0 * 10 = 0
aux = aux + digit = 0 + 1 = 1
x = x/10 = 1/10 = 0

Answer: 1
*/

class Solution {
public:
    int reverse(int x) {
        long long int reversed = 0;
        
        while (x != 0) {
            reversed *= 10;
            reversed += (x % 10);
            x /= 10;
        }
        
        if (reversed > INT_MAX || reversed < INT_MIN) return 0;
        return reversed;
    }
};