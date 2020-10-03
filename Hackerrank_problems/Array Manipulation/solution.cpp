#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* LOGIC:
see, you are adding sum to a[p] and adding negative sum at a[q+1].
 which make sure that when you add element from a[p] to a[q] sum is added only once and 
 it should be subtracted at a[q+1] as this sum span from p to q only. 
 Rest array element are either 0 or some other input sum. max of addition will be output. 
 refer to above code for p, q, and sum*/


int main() {
    long int N,K,p,q,sum,i,j,max=0,x=0;

    cin>>N>>K;
    long int *a=new long int[N+1]();

    for(i=0;i<K;i++)
    {
        cin>>p>>q>>sum;
        a[p]+=sum;
        if((q+1)<=N) a[q+1]-=sum;
    }

    for(i=1;i<=N;i++)
    {
       x=x+a[i];
       if(max<x) max=x;

    }

    cout<<max;
    return 0;
}
