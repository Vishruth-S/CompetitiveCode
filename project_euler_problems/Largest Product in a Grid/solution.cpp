#include<bits/stdc++.h>  

using namespace std; 


int dx[8] = {1,0,-1,0,1,1,-1,-1};  // Used for X axis directions

int dy[8]=  {0,1,0,-1,1,-1,1,-1};  //Used for Y axis directions


void solve(){

    int n,m; 

    n=m=20;  // n m are taken 20 as required by problem 

    // For generalising n m taking n and m as input 
    

    int arr[n][m];

    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>arr[i][j];
        }
    } 

    long long ans=0;



    for(int row=0;row<n;++row){

        for(int col=0;col<m;++col){

            // Taking each element as starting point of chain

            for(int dir=0;dir<8;++dir){

                long long temp=1;

                // Choosing one of the 8 directions (up,right,down,left,diagonally(upright,upleft,downright,downleft));

                for(int delta=0;delta<4;++delta){ 

                   //  Below formula calculates x and y cordinates of chain according to their delta values


                    int x= row+(dx[dir]*delta); 

                    int y = col+(dy[dir]*delta); 


                    if(x<0 || x>=n || y<0 || y>=m){

                        break;
                    }  

                    temp*=arr[x][y];
                } 

                ans=max(ans,temp);
            }
        }
    }

    cout<<ans<<'\n';
}


int main(){ 

  solve();

  return 0;  

}    


