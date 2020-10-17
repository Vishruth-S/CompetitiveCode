/* The solution involves predefining all the alphabets to their respective morse codes

    The program is looped over the vector array of strings
    Within itself we loop over the characters thus the time complexity is O(n^2)

    We convert the character to its equivalent ascii and convert it accordingly in order to match the array index
    i.e. ascii of a is 97, this we convert a to 97 and subtract 97, this the value becomes zero. The index of 
    0 in alphabet_morse containts the correct equivalent

    Using this we convert the string, and then use vector methods to find the number of unique entries

*/


class Solution {
private:
    char *alphabet_morse[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse_answers;
        vector<string> answer;
        int i = 0;
        for(int i=0; i<words.size(); i++){
            answer = {};
            for(int j=0; j<words[i].size(); j++)
                answer.push_back(alphabet_morse[int(words[i][j]) - 97]);
            
            char morse[50] = "\0";
            int k = 0;
            for(int i=0; i<answer.size() ;i++)
                for(int j=0; answer[i][j]!='\0'; j++){
                    morse[k] = answer[i][j];
                    k++;
                }
            morse[k] = '\0';
            morse_answers.push_back(morse);
        }
        std::sort(morse_answers.begin(), morse_answers.end());
        int uniqueCount = std::unique(morse_answers.begin(), morse_answers.end()) - morse_answers.begin();
        return uniqueCount;
    }
};