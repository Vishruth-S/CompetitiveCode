/*
The problem is based on mathematical analysis and requires the knowledge of prime numbers.
Though basic , but it helps understand a basic concept clearly.
*/

#include <iostream>
using namespace std;
int fun(int f)
    {
        for(int j=2;j*j<=(f);j++) //this contains the Main Logic ; j is traversed till sqrt of f
        {   if(f%j==0)
            {
                return 0;
            }
        }
    return 1;
    }

int main()
{
    int t,x,y,z;//t denotes the number of test cases
    cin>>t;
    while(t--)
    {
        cin>>x>>y;z=1;
        while(fun(x+y+z)==0)
        {z++;}
        cout<<z<<endl;//to print required output
    }
    
        return 0;
}