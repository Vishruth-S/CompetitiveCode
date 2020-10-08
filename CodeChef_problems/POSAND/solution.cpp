#include <bits/stdc++.h>
using namespace std;


//  The problem states for a given set of Natural numbers , find a1&a2&a3... such that ai & a(i+1) > 0

//  SOLUTION
//  It can be observed that for numbers of type 2^n there can never be such in relations and will return -1
//  For the remaining no say, 5 the series will be 2 3 1 5 4 where whenever a power of two is encountered (i.e a bit is introduced)
//  the next natural  number after it comes before it... ie 5 comes before 4 similarly 17 comes before 16 ... 
//  and the rest series remain same 
// eg 18    --->  2 3 1 5 4 6 7 9 8 10 11 12 13 14 15 17 16 18

int main(){
//  taking no of test cases as inputs 
    int T =0 ;
    cin >> T;
    while(T--){  
        int long N = 0;
        cin >> N;
        bool value = false;
        // Condition to check if  a number is a power of two..
        if(ceil(log2(N)) == floor(log2(N)) && N !=1)
        {
            cout << -1<< "\n";
            continue;
        }
        //  For n=1 it is always 1
        else if(N == 1) {
            cout << 1<< "\n";
            continue;
        }
        //  running a loop till the required number. 
        for(int long i =1; i <=N; i++)
        {
            if(i==3)
            {
                cout << 1 << " ";
            }
            else if(ceil(log2(i)) == floor(log2(i)))
            {   
                // if a power of two is encountered increment the i to the next no .. as it will be first in the series
                cout << i+1<< " ";
                //  assign a true value that a power of two was encountered
                value = true;
                continue;
            }
            //  if value of i was encounterd  i+1th diz. was printed before.. print that power of two now.
            else if(value == true)
            {
            cout << i-1<<" ";
            //  again set value to false. 
            value  = false;
            }
            else
            {
                cout << i << " ";
            }
        }
        printf("\n");
    } 
        return 0;
}

