#include<bits/stdc++.h>
using namespace std;

//#define ll long long

const int N = 2e5+100;
double eps=1e-6;

int main(){	
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        //n=1000000000;
        long long lpg=log2(n);
        long long p=pow(2,lpg);
        if(p==n && p!=1)cout<<-1<<endl;
        else{
            long long ans=0;
            ans+=(n-1)/2;
            long long int cond=1;
            long long  tn=n;
            tn/=2;
            long long i=0;
            long long k=log2(tn);
            while(i<=k){
                long long x=pow(2,i);
                long long adder=tn;
                adder=adder-x;
                adder=adder/(2*x);
                adder=adder*(2*x);
                ans+=adder+(2*x);
                    //cout<<tans<<endl;
                i++;
            }
            cout<<ans<<endl;
        }
    }
	return 0;
}