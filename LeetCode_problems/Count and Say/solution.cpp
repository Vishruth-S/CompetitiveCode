string Solution::countAndSay(int A) {
    string s[A+2];
    s[1] = "1";
    s[2] = "11";
    for(int i = 3; i <= A; i++) {
        s[i] = "";
        for(int j = 0; j < s[i-1].length(); j++) {
            char x = s[i-1][j];
            int count = 1;
            while((j+1) < s[i-1].length() && s[i-1][j+1] == x) {
                count++;
                j++;
            }
            string sCount = "";
            while(count > 0) {
                int y = count % 10;
                count = count / 10;
                char c = y + '0';
                sCount.push_back(c);
            }
            string iCount = "";
            for(int j = sCount.length() - 1; j >= 0; j--) {
                iCount += sCount[j];
            }
            s[i] += iCount;
            s[i] += x;
        }
    }
    return s[A];
}
