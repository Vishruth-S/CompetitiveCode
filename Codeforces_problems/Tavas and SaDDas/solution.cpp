#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main(){
    // as described in the probelm that a lucky number will consist of 4 and 7 only so for each position will either contain a 4 or a 7 
    
    long long int n;
    cin>>n;
    // we need to find position of n in our lucky series
    // if we tries to generate the whole lucky series (using bitmasking) till n then probably we would be getting a TLE 
    int rem;
    vector<int>v;
    while(n>0){
        rem=n%10; // last digit is store in the rem
        if(rem==4){
            v.push_back(0); // if last digit is 4 then 0 is pushed into the vector 
        }else{
            v.push_back(1); // if last digit is 7 then 1 is pushed into the vector 
        }
        n/=10;
    }
    
    long long int res=0; // res will be giving the postion of our lucky number
    // to do so we iterate through the vector
    // lucky series would be like 4,7,44,47,74,77,444,447,474,477,744,747,774,777...........
    // therefore it can be infered from the series that we will be having 2 sigle digit lucky numbers  
    //                                                                    4 two digit lucky numbers
    //                                                                    8 three digit lucky numbers and so. that is in the powers of 2
    
    for(int i=0;i<v.size();i++){
        res+=((1<<i)+(1<<i)*v[i]); 
        // (1<<i) gives us the lucky numbers possesed by no having i digits that is if i=1 then it gives us 2 as we have 2 lucky numbers with i digits
        // (1<<i)*v[i] this gives us the position of the lucky number in the set of numbers belonging to same digit that is if n=447 it is represented as 001 (in the vector) it is at the second position of the series {000,001,010,011,100,101,110,111}
    }
    cout<<res<<endl; // finally we found the position of n in the lucky series

    return 0;
}
