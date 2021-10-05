#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isItSafe(vector<vector<char>>& board , int n , int row , int col , char num){
        for(int pos=0;pos<n;pos++){
            if(board[row][pos]==num) return false;
            if(board[pos][col]==num) return false;
            if(board[(row/3)*3 + pos/3][(col/3)*3 + pos%3]==num) return false;
        }
        return true;
    }
    
    bool returnSolvedSuduko(vector<vector<char>>& board){
        int n = board.size();
        for(int row=0;row<n;row++){
            for(int col=0;col<n;col++){
                if(board[row][col]=='.'){
                    for(char num='1';num<='9';num++){
                        if(isItSafe(board,n,row,col,num)){
                            board[row][col]=num;
                            if(returnSolvedSuduko(board))
                                return true;
                            board[row][col]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        returnSolvedSuduko(board);
        return;
    }
};

int main(){
   int n;
   cin>>n;
   vector<vector<int>> board(n,vector<int>(n));
   for(int i=0;i<n;i++){
      for(int j=0;j<n;j++)
         cin>>board[i][j];
   }
   solveSudoku(board);
   for(int i=0;i<n;i++){
      for(int j=0;j<n;j++)
         cout<<board[i][j]<<" ";
      cout<<endl;
   }
}