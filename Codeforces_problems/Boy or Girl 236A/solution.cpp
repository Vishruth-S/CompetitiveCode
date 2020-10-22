#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string s;
    cin >> s;
    // occur[i] = 1 if character('a' + i) occurs in s
    vector<int> occur(26);
    for (char ch : s) {
        occur[ch - 'a'] = 1;
    }
    int cnt = 0;
    for (int i = 0; i < 26; i++) {
        if (occur[i] > 0) cnt++;
    }
    // if the number of distinct characters in the string is odd, then he is a male, otherwise she is a female
    if (cnt % 2 == 0) cout << "CHAT WITH HER!\n";
    else cout << "IGNORE HIM!\n";
    return 0;
}