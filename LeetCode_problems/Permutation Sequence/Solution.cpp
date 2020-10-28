#include <bits/stdc++.h>
using namespace std;

int fact[15];
string s="";
int c=0;
void calc(int  n,int k,int m,vector<int > &v){ //m always decreases by 1 
    if(m<0){
    	return ;
    }
    
    int d=fact[m];// factorial of m 
    
    int x=ceil(k*1.0/d*1.0);// index of the element that has to be taken from vector
    c=c*10 + v[x-1];        // forming the number 
    s=to_string(c);         // converting  number to string 
    v.erase(v.begin()+x-1);  // now remove that digit as permutation has every digit once
    int next_k=k-((x-1)*d);     // finding the next k which is to be further processed with the same logic
    calc(n,next_k,m-1,v);   //its a recursive function
}


class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int > v;
        
        fact[0]=1,fact[1]=1,fact[2]=2;// pre compute factorial
        for(int i=3;i<=n;i++){
            fact[i]=fact[i-1]*i;
        }
        c=0;
        s="";
        for(int i=1;i<=n;i++){ // insert the first permutation in sorted order
            v.push_back(i);
        }
        calc(n,k,n-1,v);
        
        return s;
        
    }
};
