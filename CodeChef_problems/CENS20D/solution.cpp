//@shivam23rawat	

/* ------------LOGIC----------------	
We have to "bitwise AND" all elements with each elements succeeding them, one by one, to find atleast 1 element with which the result is 	
the first operand itself. So using brute-force select each element of the array one by one and then use a nested "for" loop to select all 	
the numbers succeeding it and if their "bitwise AND" gives desirable result then increase the counter.	
*/	

#include <bits/stdc++.h>	

using namespace std;	

#define lli long long int	
#define cases lli testcases;cin>>testcases;while(testcases--)	

void solve();	

int main(){	
    cases{ //input no. of testcases	
        solve(); //run solving function for each case	
    }	
    return 0;	
}	

void solve(){	
    int N;	
    cin>>N;	
    int A[N]; //init an array	
    int count = 0; //creating counter variable	
    for(int i = 0;i<N;i++){	
        cin>>A[i]; //input all the integers	
    }	
    for(int i = 0;i<N;i++){	
        for(int j=i+1 ; j<N ; j++){	
            if((A[i]&A[j])==A[i])  //check if their bitwise AND matches the first operand 	
                count++; //if yes the count this pair	
        }	
    }	
    cout<<count<<endl; //print the number of pairs	
}