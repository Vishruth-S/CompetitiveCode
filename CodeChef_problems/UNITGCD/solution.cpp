/*
LOGIC:
The main concept used in this problem is that two consecutive natural numbers are always co prime.
Here we have to read n pages in minimum no of days and each day the page numbers we read must be pairwise co prime.  
Also we can read a page only once.

CASE 01: n=1
We can read page no 1 on day 1 itself.

CASE 02: n is even
There will be total of n/2 even page numbers and we cannot read any two of even page number on a day since two even number
can not be co prime. So we need minimum n/2 days to read the complete book. 
Each day we will read 2 consecutive pages (2 consecutive natural numbers are co prime).

CASE 03: n >=3 and n is odd
Here we will have (n-1)/2 even numbers. So minimum (n-1)/2 day is required.
On first day read 3 pages i.e 1, 2 and 3
After that on each day read 2 consecutive pages till the book is finished.
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; // no of test cases
    cin>>t; 
    while(t--){ 
        int n; // no of pages
        cin>>n;
        
        if(n==1){
            cout<<1<<"\n"; /* no of days required to read the book */
            cout<<1<<" "<<1<<"\n";
        }
        else if(!(n & 1)){  /* n is even */
            cout<<n/2<<"\n"; /* no of days required to read the book */
            for(int i=1;i<=n/2;i++) 
            cout<<2<<" "<<2*i-1<<" "<<2*i<<"\n";
        }
        else{
            cout<<n/2<<"\n"; /* no of days required to read the book */
            cout<<3<<" "<<1<<" "<<2<<" "<<3<<"\n"; 
            for(int i=2;i<=n/2;i++) 
            cout<<2<<" "<<2*i<<" "<<2*i+1<<"\n";
        }
    }
    return 0;
}