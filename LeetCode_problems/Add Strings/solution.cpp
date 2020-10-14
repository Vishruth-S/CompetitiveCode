class Solution {
public:
    string addStrings(string num1, string num2) {
        return to_string(std::stoi(num1)+std::stoi(num2));
        // std::stoi is used to convert string to int (default is decimal, but the base can also be defined as a second parameter)
        // to_string converts int to string
    }
};
