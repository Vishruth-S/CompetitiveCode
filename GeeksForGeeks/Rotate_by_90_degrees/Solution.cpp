/* For better understanding of the problem, here's an example:
Input:
N = 3
matrix[][] = [[1 2 3],
              [4 5 6],
              [7 8 9]]
Output:
3 6 9
2 5 8
1 4 7

Expected Time Complexity: O(N*N)
Expected Auxiliary Space: O(1)
*/


#include<bits/stdc++.h>
using namespace std;

//Function to rotate the matrix by 90 degrees
void rotate(vector<vector<int> >& matrix)
{
    int r=matrix.size(); //Stores no. of rows in the matrix
    int c=matrix[0].size(); //Stores no. of columns in the matrix
    for(int i=0;i<r;i++){
        for(int j=i+1;j<c;j++){
             //Swapping the element at position (i,j) with position (j,i)
            int temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
    }
    for(int i=0;i<r/2;i++)//Loop which travels through only one half of the number of rows
    {
        for(int j=0;j<c;j++){
             //Swapping the elements in the first half of the rows with the second half of the rows
            swap(matrix[i][j],matrix[r-1-i][j]);
        }
    }
}

int main()
{
    int t;
    cin>>t; //Inputting the number of test cases
    while(t--)
    {
        int n;
        cin>>n; //Inputting the size of the matrix
        vector<vector<int> > matrix(n); //Initializing a 2 dimensional vector of size n

        //Initializing the 2 dimensional vector with the elements entered
        for(int i=0; i<n; i++)
        {
            matrix[i].resize(n);
            for(int j=0; j<n; j++)
                cin>>matrix[i][j];//Entering the elements of the vector
        }
        rotate(matrix);//Calling the function to rotate the matrix by 90 degrees

        //Printing the final rotated matrix
        for (int i = 0; i < n; ++i)
        {
            for(int j=0; j<n; j++)
                cout<<matrix[i][j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
