/* The program runs a main loop to iterate over a string character by character
    The Complexity of the code is O(n).

    The string is iterated character by character, and in each iteration the
    i+2th character is checked if it is #. If it is hash then the string considered is
    XX# and we convert XX to its equivalent integer. Otherwise the character is changed to its ascii value
    and 48 is subtracted from it.

    Following this we add 96 in order to reach the ascii value of the corresponding ascii of the characters.
    ASCII values: 
    a -> 97
    A -> 65
    1 -> 49

    The ascii values are appended to a vector<int> and later converted to the equivalent string
*/

class Solution {
public:
    string freqAlphabets(string s) {
        vector<int> answer;
        int i, string_length = s.length();
        for(i=0; i<string_length-1; i++){
            if(s[i+2] == '#'){
                answer.push_back((((int)(s[i])-48)*10 + (int)(s[i+1])-48)+96);
                i+=2;
            }
            else
                answer.push_back(((int)(s[i])-48)+96);
        }
        if(s[string_length-1] !='#') answer.push_back(((int)(s[i])-48)+96);
        char mapped_string[answer.size()+1];
        for(int j=0; j<answer.size(); j++){
            mapped_string[j] = (char)(answer[j]);
        }
        mapped_string[answer.size()] = '\0';
        return mapped_string;
    }
};