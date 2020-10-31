#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Find sum of digits of a number
long int sumofdigits(long int n)
{
    int d;
    d=n%10;
    if(n<10)
        return d;
    else
        return d+sumofdigits(n/10); 
}

// Recursively find sum of digits till the number is single digit
long int sumuptosingledigit(long int n)
{
    int k=sumofdigits(n);
    if(k<10)
        return k;
    else
        return sumofdigits(k);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long int m,n;
    cin>>n;
    cin>>m;
    int sum1=sumofdigits(n);
    cout<<sumuptosingledigit(sum1*m);
    return 0;
}
