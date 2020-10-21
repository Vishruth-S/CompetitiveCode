//c++ solution to CHEFSTR1 Codechef problem

#include <bits/stdc++.h>           //including all libraries used through <bits.stdc++.h>
using namespace std;               //std for using standard library for every function avoiding repitition

int main()          //main function to perform calculation
{
    int n;          //integer n(no. of test cases) defined
    scanf("%d",&n);         //taking input n(no. of test cases) using scanf()
    for(int i=0;i<n;i++){           //for loop n times for all test cases
        int m;                      //integer m defined
        long long x=0;              //long long type value x(strings to skip) initialized to 0
        scanf("%d",&m);             //taking input m(no. of strings to pluck) using scanf()
        vector<int> v;              //defining vector v of type int to store strings to be plucked
        for(int j=0;j<m;j++){
            int a;                  // integer a defined
            scanf("%d",&a);         //taking integer input a(place of string to be plucked)
            v.push_back(a);         //adding place of string to be plucked in vector
        }
        for(int k=1;k<m;k++){       //for loop in vector v of length m
            x+=((abs(v[k]-v[k-1]))-1);          //abs() function to take modulus if returning back(v[k]-v[k-1] < 0) 
                                                //and increasing x by no. of strings to skip between v[k] and v[k-1]
                                                //and subtracting 1 because both v[k] and v[k-1] are plucked that don't add to skip no. x 
        }
        printf("%ld\n",x);          //output no. of strings to skip
    }
	return 0;
}

