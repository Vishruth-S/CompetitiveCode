/*
    Created on Tue Oct  6 2020
    @author: lusmoura
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
            int mult = 1; // multiplication factor (whether to add or subtract)
            
            if (prev < mp[s[i]]) mult = -1;
            ans += (mult * prev);
            prev = mp[s[i]];
        }
        
        return ans + prev;
    }
};