#include <bits/stdc++.h>
using namespace std;

void move(int n,char from,char to,char other){
    if(n!=1){
        move(n-1,from,other,to);
        cout<<"Moving ring "<<n<<" from "<<from<<" to "<<to<<endl;
        move(n-1,other,to,from);
    }
    else{
        cout<<"Moving ring "<<n<<" from "<<from<<" to "<<to<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    move(n,'A','B','C');
}