#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)

int main() {
//in this question n denotes the number,count denotes the crimes and police denotes the police recruited
    int n,count=0,police=0;
    cin>>n;
    //p[n] is the array of crime cases and recuitments
    int p[n];
    fo(i,n){
        cin>>p[i];
    }
    //if the i th element of the array is anything except -1 (which denotes crime) that means police recruited is increased from 0
    //else if the crime is increased that means police is assigned and no of policeman free decreases
    //otherwise if police count becomes 0 and crimes are reported counts increase which denotes unresolved crimes
    fo(i,n){
        if(p[i]!=-1){
            police+=p[i];
        }
        else if(p[i]==-1 && police>0){
            police--;
        }
        else{
            count++;
        }
    //printing the no of crimes remained    
    }
    cout<<count<<endl;
	return 0;
}