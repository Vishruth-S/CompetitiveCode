
// In the solution below, we'll focus on finding all subsequences (including empty ones), and subtract the empty subsequence at the end.

// In order to not repeat work, our goal is to phrase the current problem in terms of the answer to previous problems. 
// A typical idea will be to try to count the number of states dp[k] (distinct subsequences) that use letters S[0], S[1], ..., S[k].

// Naively, for say, S = "abcd", we have dp[k] = dp[k-1] * 2. 
// This is because for dp[2] which counts ("", "a", "b", "c", "ab", "ac", "bc", "abc"), dp[3] counts all of those, plus all of those with the x ending, 
// like ("d", "ad", "bd", "cd", "abd", "acd", "bcd", "abcd").

// However, for something like S = "abab", We have:

// dp[0] = 2, as it counts ("", "a")
// dp[1] = 4, as it counts ("", "a", "b", "ab");
// dp[2] = 7 as it counts ("", "a", "b", "aa", "ab", "ba", "aba");
// dp[3] = 12, as it counts ("", "a", "b", "aa", "ab", "ba", "bb", "aab", "aba", "abb", "bab", "abab").
// We have that dp[3]countsdp[2], plus("b", "aa", "ab", "ba", "aba") with "b" added to it. 
// Notice that("", "a") are missing from this list, as they get double counted. 
// In general, the sequences that resulted from putting "b" the last time (ie."b", "ab") will get double counted. So we'll subtract that count.


class Solution {
public:
    int distinctSubseqII(string S) {

        int index[256];                     // for storing index of character of given string.            
                
        memset(index,-1,sizeof(index));     // initiallising the index array.
        int mod= (int)(pow(10,9))+7;        // Value of mod.

        long dp[2001];                      
        dp[0]=1;                            // Initializing dp[0]=1 because empty string will have one subsequence.
        
        for(int i=1;i<=S.size();i++)        
        {   
            dp[i]= (2*dp[i-1])%mod;         // doubling the number of subsequence.
            if(index[S[i-1]]!=-1)           // checking if current char was previously present or not.
            {
                dp[i]=(dp[i]-dp[index[S[i-1]]]+mod)%mod;    // if yes then subsequence must be counted twice so substracting them once.
            }
            
            index[S[i-1]]=(i-1);            // updating the index of current char.
        }
        return dp[S.size()]-1;
};