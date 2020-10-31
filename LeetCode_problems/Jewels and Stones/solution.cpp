class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count = 0; // taking the count of stones that are jewels
        for(int i=0;i<J.size();i++){    // traversing over the types of jewels string
            for(int j=0;j<S.size();j++){    // traversing over the type of stones given string and comparing if a jewel is present
                if(J[i] == S[j]){
                    count++;    // incrementing the count if jewel is found
                }
            }
        }
        return count;
    }
};
