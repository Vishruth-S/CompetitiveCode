#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Used to clear the stack of input
    if(N % 2 != 0 ){ //if N is odd
        cout<<"Weird";
    }
    else if(N % 2 == 0 && N >= 2 && N <= 5){ //if N is even and between 2 and 5
        cout<<"Not Weird";
    }
    else if(N%2 == 0 && N>=6 && N<= 20){ //if N is even and between 6 and 20
        cout<<"Weird"; 
    }
    else{cout<<"Not Weird";} //if N is even and greater than 20


    return 0;
}
