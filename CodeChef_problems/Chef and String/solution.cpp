#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t; //Input of number of testcases
    while(t--)
    {
        string s;
        cin>>s;     //Input of a String containing x or y letters
        int i,c=0;
        //Calculating the maximum numbers of pairs formed
        for(i=0;i<s.length();i++)
        {
            if((s[i]=='x'&&s[i+1]=='y')||(s[i]=='y'&&s[i+1]=='x'))
                {
                    c++;    //If y letter is the next element of x or x letter is the next element of y then we increase the c by 1
                    i++;    
                }
        }
        cout<<c<<endl;  //printing the maximum number of pairs

    }
    return 0;

}
