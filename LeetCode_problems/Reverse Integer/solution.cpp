class Solution {
public:
    int reverse(int x) {
        long long int reversed = 0;
        
        while (x != 0) {
            reversed *= 10;
            reversed += (x % 10);
            x /= 10;
        }
        
        if (reversed > INT_MAX || reversed < INT_MIN) return 0;
        return reversed;
    }
};