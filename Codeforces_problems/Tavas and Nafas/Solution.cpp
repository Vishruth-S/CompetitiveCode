#include<bits/stdc++.h>
using namespace std;
int main()
    {
        // In this problem we need to make a program that converts the given input decimal number into its word form
        // Example :- "9" into "nine", "66" into "sixty-six", "99" into "ninety-nine"
        // Constraints of the problem:- 1) the input number should be between 0 and 99 and 2) all the word formation which needs to be done should be in lower case alphabetical form
        // 3) If the length of the digit of a number is two then its word form contains two words seprated by the hyphen("-") except for "10" that you might have guessed is "ten"
        
        int n,i,j;// n is for the input number, i and j is for looping the for or while loop
        string s;
        cin>>n; // Input of the number is stored in n
        int c=0; // a variable c is for counting the length of the digits a number "n" has
        int m=n; // variable m which carry the copy of number "n"
        vector<int> digi; // a vector of integers basically for storing all the digits a number has
        
        while(n!=0) // A simple algorithm used for determining all the digits the number "n" has 
        {
            digi.push_back(n%10);
            n/=10;
            c++;
        }
        
        // Now as the variable "n" gets exhausted in counting the digits the number has and for storing purpose , we can now use m in place of n (thats why we created the copy)
        
        // Creating three Vector of strings which basically forms a data our program is going to act upon
        
        // For integers 1-9 basically we have created a vector "one"  which tells the  what words are going to have for which one digit number

        vector<string> one={"one","two","three","four","five","six","seven","eight","nine"};
        
        //Similarly for integers between 11-19 I have created another vector for strings to store there values named as "sone"(a two digit number starting with one)
        
        vector <string> sone={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
        
        // And A vector named "two" which stores basically not every number between 20-99 but the required ten's digit value (as 20-29 ten digit is always going to be "twenty") 
        
        vector<string> two={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
        
        // Now we have made all our assumptions ready for code

        if(c==1 || c==0) // if the count of the digits is 0 or 1 please note here - for the number n is "0" the c will also be 0 please refer to the code above  
        {
            if(m==0) cout<<"zero"<<endl; // if m is "0" we say it is simply a "zero" number 
            else cout<<one[m-1]<<endl; // otherwise we do one[m-1] because index is basically starts with a zero
        }
        else
        {
            reverse(digi.begin(),digi.end()); // reversing just because digits are stored in reverse order initially
            if(digi[0]==1)
            {
                cout<<sone[digi[1]]<<endl; // in this case we are more focussed for the number between 10-19 and simply indexing it
            }
            else
            {
                if(digi[1]!=0) // if Ones digit is not "0"
                {                cout<<two[digi[0]-2]<<"-"; // Here in this case we are doing "-2" the given number just for indexing it with the "two" vector because it doesn't have "one" and  "ten" in the beginning 
                                 cout<<one[digi[1]-1]<<endl;
                }
                else
                {
                    cout<<two[digi[0]-2]<<endl; // if the ones digit is 0 we simply output the two's string
                }
                
            }
            
        }
        
 
    }
