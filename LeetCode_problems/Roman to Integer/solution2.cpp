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
        for (char letter : s) {
            ans += mp[letter];
        }
        
        for (int i = 0; i < s.size()-1; i++) {
            if (s[i] == 'I' && (s[i+1] == 'V' || s[i+1] == 'X')) ans -= 2;
            else if (s[i] == 'X' && (s[i+1] == 'L' || s[i+1] == 'C')) ans -= 20;
            else if (s[i] == 'C' && (s[i+1] == 'D' || s[i+1] == 'M')) ans -= 200;
        }
        
        return ans;
    }
};