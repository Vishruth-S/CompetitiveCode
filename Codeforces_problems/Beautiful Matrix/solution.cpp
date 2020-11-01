#include<bits/stdc++.h>
using namespace std;
int main()
    {
        /* In this problem we basically need to find the position of the 1 in the 5 x 5 matrix
           which is only present once in the matrix and then we need to find the absolute difference 
           of the index  of the element present in the middle (which is always (2,2) in the 5 x 5 matrix) 
           with the one which has element "1" in it  */
           
        int num,i,j;  // Taking "n" for the input of the element (which is either 1 or 0) , i and j are for iterating into the matrix 
        int row, col; // row and col is for storing the indices of the row and column of the matrix which has 1 in it
        
        // Now iterating through the input 5 x 5 matrix
        for(i=0;i<5;i++) // i is for iterating through rows
        {
            for(j=0;j<5;j++) // j is for iterating through columns
            {
                cin>>num; // Taking num as the input of all the elements of 5 x 5 matrix
                if(num==1) // if num==1
                {
                    row=i;    // storing the position of the element 
                    col=j;    // of the matrix which has 1 in it.
                }
            }
        }
        // Simply printing the sum of the absolute difference of the position of the element "1" of the matrix with the position of the middle element i.e.,abs(row-2)+abs(col-2)
        cout<<abs(row-2)+abs(col-2)<<endl; 
 
    }
