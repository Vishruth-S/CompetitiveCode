#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
//i have used macro to declare a loop for short cut
int main() {
    int n;
    cin>>n;
    //took input from the user 
    //if the number entered is two it cannot be divided into even natural numbers
    //thats why its a corner case and needs to be handled differently
    if(n==2){
        cout<<"NO"<<endl;
    }
    //if there is any even number it can be  divided evenly
    else if(n%2==0){
        cout<<"YES"<<endl;
    }
    //no odd number can be divided evenly
    else{
        cout<<"NO"<<endl;
    }


	return 0;
}
