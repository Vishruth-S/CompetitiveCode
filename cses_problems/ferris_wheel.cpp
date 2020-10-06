#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a, a+n);
    long long tot = 0;
    long long count = 0; 
    if (n==1) cout<<"1";
    else{   
        int i=0,j=n-1;
        while(i<=j){
            tot=a[i]+a[j];
            if(tot<=x){
                count++;
                i++;
                j--;
                tot = 0;
            }
            else{
                j--;
                count++;
                tot = 0;
            }
        }
        cout<<count;
    }
}