/*
    The basic idea used in this solution is to store all the numbers separated by dots ('.') in a vector of integers for both the versions and then compare the
    vectors accordingly.
    Example:
      version1: 0.1
      version2: 1.1
      then for these versions, we get the following vectors,
      v1 = {0,1}    // version1
      v2 = {1,1}    // version2
      we then make both the size of both the vectors equal by appending extra zeros (0) to the shorter vector.
      Then we finally compare each index value of both the vector and return the final answer accordingly.
*/


class Solution {
public:
    int compareVersion(string version1, string version2) {
        string s = "", t = "";
        vector<int> v1,v2;
        
        for(char c: version1){
            if(c != '.'){
                s += c;                   // store each number substring from original string.
            }
            else{
                v1.push_back(stoi(s));    // if dot('.') convert string to number and append it to the vector, clear the string. 
                s = "";
            }
        }
        v1.push_back(stoi(s));            // for last set of number substring 
        
        for(char c: version2){
            if(c != '.'){
                t += c;
            }
            else{
                v2.push_back(stoi(t));
                t = "";
            }
        }
        v2.push_back(stoi(t));
        
        while(v1.size() < v2.size()){
            v1.push_back(0);                    // if size of v1 is less than v2 then append extra zeros(0) to v1
        }
        
        while(v2.size() < v1.size()){
            v2.push_back(0);                    // if size of v2 is less than v1 then append extra zeros(0) to v2
        }
        
        for(int i = 0; i < v1.size(); i++){     // compare the vector index wise
            if(v1[i] < v2[i])
                return -1;                      // if at any index, value of v1 is less than v2 return -1
            else if(v2[i] < v1[i])
                return 1;                       // if at any index, value of v2 is less than v1 return 1
        }
        return 0;                               // if all the values at all the indices are equal then return 0
    }
};
