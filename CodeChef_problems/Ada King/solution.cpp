#include<bits/stdc++.h>
using namespace std; typedef long long ll;
/*
---------------LOGIC-----------
We are asked to limit the number of king moves to n in 8x8
chessboard so what we can do is place first the king at the top-left
for ease of access.

Now we'll run a loop from top-left row by row decrementing the 
number of available places and when n is 0 we start filling 
obstackles in the rest of the board.

Since we have no restriction on number of empty cells or obstacle 
cells we can easily fill the whole grid with X.

```
    Let's consider example with n=10
    Now we'll first place the king at (0,0)
    and start decrementing n 
    so it grid will be filled like this

       8x8 chessboard 
  ( O . . . . . . .
    . . ) Here till now we have 10 places for the king so rest
    can be filled with X to fulfill our requirement

    Thus our answer will be 
    O . . . . . . .
    . . X X X X X X
    X X X X X X X X
    X X X X X X X X
    X X X X X X X X
    X X X X X X X X
    X X X X X X X X
    X X X X X X X X

```

```
    Let's take another example of n=25
    Following the same procedure 
    
    1 O followed by 24 dots and rest cross 

    O . . . . . . . 
    . . . . . . . . 
    . . . . . . . .
    . X X X X X X X
    X X X X X X X X
    X X X X X X X X
    X X X X X X X X
    X X X X X X X X

```


*/

void solve(){
    ll n; cin>>n;
    vector<vector<char>> v(8,vector<char> (8,'.'));
    n--;

    v[0][0]='O';
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(!i && !j) continue;   //Exclude the origin (0,0)
            if(n==0){
                v[i][j]='X';
            }
            else{
                n--;
            }
        }
    }

    for(auto c: v){
        for(auto k: c){
            cout<<k;
        }
        cout<<endl;
    }
    
}


int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}