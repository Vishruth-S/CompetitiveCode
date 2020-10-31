#include<bits/stdc++.h>
using namespace std;
int main()
    {
        // This problem is basically a constructive algorithm type
        // One of the important features of Constructive Algo is there are many solutions of the same problem can be possible
        // I am sharing one of those solutions
        // Constraints of the problem  1) Variable "t" for testcases can be from 1 to 10^5 2)
        // 2) Input number "n" vary from 1 to 10^18
        /* Basically what we need to do is, in the given input integer "n" we need to find two non-negative integers (starting with 0) 
           such that the sum of the bitwise OR  and the bitwise AND of the two numbers is equal to the given number "n" .
           Lets take two numbers a and b then , (a or b) + (a and b) == n */
        // Simple solution could be to take 0 as "a" and n as "b" because any number when "or" with "0" will gives us the given number
        // Similarly, any number when "and" with "0" will gives us 0
        // so, n= (0 or n) + (0 and n)
        int t; // taking variable t "int" (as t is atmost 10^5)
        long long n; // taking the variable "n" of type long long (as n is atmost 10^18)
        cin>>t; // t for testcases
        while(t--) // looping till t!=0
        {
           cin>>n; // taking input of the number "n"
           cout<<0<<" "<<n<<endl; // Simply printing 0 with n
        }
    }   
