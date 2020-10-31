//The main idea of the problem is that the sum of every digit must be reduced until it reach to be one digit Only
//EX: if we have this number 887
//1st step we add (8+8+7)=23
//2nd step we add the digits again (2+3)=5 and it's one digit number "this step could be repeated if the number is larger!"
//3rd step we print the number of steps we take to reach to one digit number => "5" in our Example!
#include<bits/stdc++.h>
using namespace std;
int main()
{
	  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); //this line is to make the input output operation faster
    string s; //string define
    int n,sum=0; //variables define we need in our problem sum is counter for the steps and n is the resulting number of adding operation
    cin>>s; //take the input number as string
    if(s.length()==1){cout<<sum<<endl; return 0;} //check if the length is already one digit so we prit it easily
    else{
    while(1){ //infinite loop until we get the wanted condition
        int n=0; //making the resulting zero every iteration to don't be affected with the last number
        for(int i=0;i<s.length();i++) n+=(int)(s[i]-'0'); //calculating the resulting number of adding all the didgits
        s=to_string(n); //trasform the resulting number to string
        sum++;  //add one more step to the sum
        if(s.length()==1){cout<<sum; break;}  //break the code if the condition is happened and print the result sum
    }
    }
}
