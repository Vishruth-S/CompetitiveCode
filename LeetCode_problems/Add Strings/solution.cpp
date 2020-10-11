class Solution {
public:
    string addStrings(string num1, string num2) {
        return to_string(std::stoi(num1)+std::stoi(num2));
    }
};
