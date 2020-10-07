/*
    Created on Tue Oct  6 2020
    @author: lusmoura
*/

/*
We create a hash table that maps each character to its value.
Then, for each digit we check if it's greater that the previous one, if so, it means
we should subtract its value, otherwise, its value should be added. 
For example: "IX", 1 is subtracted and 10 is added.

So we iterate over the letters getting their values and checking if they should be added
or subtracted. One important thing is that we are always looking at the previous
digit, so in the end we have to add the last digit.

Example:
--------
s = XIV

Iteration 1:
curr_digit = I (value = 1)
prev_digit = X (value = 10)
ans = 10

prev_digit is greater than curr_digit, so we add its value

Iteration 2:
curr_digit = V (value = 5)
prev_digit = I (value = 1)
ans = 9

prev_digit is smaller than curr_digit, so we subtract its value

After loop:
ans = ans + last_digit = 9 + value(V) = 9 + 5 = 14

Ans = 14


Example:
--------
s = MXCIV

Iteration 1:
curr_digit = X (value = 10)
prev_digit = M (value = 1000)
ans = 1000

prev_digit is greater than curr_digit, so we add its value

Iteration 2:
curr_digit = C (value = 100)
prev_digit = X (value = 10)
ans = 990

prev_digit is smaller than curr_digit, so we subtract its value

Iteration 3:
curr_digit = I (value = 1)
prev_digit = C (value = 100)
ans = 1090

prev_digit is greater than curr_digit, so we add its value

Iteration 4:
curr_digit = V (value = 5)
prev_digit = I (value = 1)
ans = 1089

prev_digit is smaller than curr_digit, so we subtract its value

After loop:
ans = ans + last_digit = 1089 + value(V) = 1089 + 5 = 1094

Ans = 1094
*/

class Solution {
public:
    int romanToInt(string s) {
        map <char, int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        
        int ans = 0;
        int prev = mp[s[0]];
    
        for (int i = 1; i < s.size(); i++) {
            int mult = 1;
            
            if (prev < mp[s[i]]) mult = -1;
            ans += (mult * prev);
            prev = mp[s[i]];
        }
        
        return ans + prev;
    }
};