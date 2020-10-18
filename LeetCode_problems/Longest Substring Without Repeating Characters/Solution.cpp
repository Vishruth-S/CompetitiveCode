class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int res = 1;

        //if string is empty, return 0;
        if (s == "")
            return 0;
        //created a vector to store the count of characters
        vector<int> v(256, 0);

        // length of string
        int n = s.length();

        //variable declaration
        int i = 0, j = 0;

        v[s[0]] = 1;

        //Sliding Window Algorithm
        while (j < n - 1)
        {
            if (v[s[j + 1]] == 0)
            {
                j++;
                v[s[j]] = 1;
                res = max(res, j - i + 1);
            }
            else
            {
                v[s[i]]--;
                i++;
            }
        }

        // return the answer
        return res;
    }
};