#include <bits/stdc++.h>
using namespace std;

void move(int n,char from,char to,char other){
    //consider n=4 for example
    //when you put 4 rings to rod C, you must at some point have 4th ring from A to C directly
    // so that means 1st,2nd and 3rd rings must be in rod B for this to happen
    //now for that, at somepoint u must move 3rd ring from A to B
    //for that, 1st and 2nd rings must be in rod C
    //and for that u must move 2ns ring from A to C
    //and so on goes the recursion..

    //we only need to print the output, so theres no need for any data structure
    //complexity will be O(2^n)
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