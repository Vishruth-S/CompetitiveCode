class Solution {
public:
    int addDigits(int num) {
//If number is 0 return 0
        if(num==0)
        {
            return 0;
        }
//if the number is single digit return the number itself
        if(num>0&&num<=9)
        {
            return num;
        }
//if number is divisible by 9 then by the divisibility test that a number divided by 9 has 
//the sum of digits as 9 return 9

        if(num%9==0)
        {
            return 9;
        }
//else return the remainder on dividing by 9.
        return num%9;
    }
};
