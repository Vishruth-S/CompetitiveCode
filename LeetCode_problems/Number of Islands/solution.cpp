// solution for : No Of Islands
// This is a recucrive implementation of this problem in c++
//This solution ustilises a function called "markNeighbours" which considers a person walking in 4 possible directions on an island and marking each bit as visited (changing its value to '2') on that island so that they do not get repeated on counting
//thenafter In the main function (given function), the person moves across the matrix and perform few checks , if the checks are passed , a  count ariable is increased. (the checks get faild when they get marked in the markNeighbours function)

class Solution
{
public:
    void markNeighbours(vector<vector<char>> &matrix, int r, int c, int ci, int cj)
    {
        if (ci < 0 || ci >= r || cj < 0 || cj >= c || matrix[ci][cj] != '1') // checking if the cell of the matrix is in bounds
        {
            return;
        }
        // the cases which passes the above checks are lands and need to be marked
        matrix[ci][cj] = '2';

        // recursively calling this function with the neighbours of the gien cell
        markNeighbours(matrix, r, c, ci + 1, cj);
        markNeighbours(matrix, r, c, ci, cj + 1);
        markNeighbours(matrix, r, c, ci - 1, cj);
        markNeighbours(matrix, r, c, ci, cj - 1);
    }

    int numIslands(vector<vector<char>> &matrix)
    {
        int count = 0;
        int r = matrix.size();
        if (r == 0)
            return 0;
        int c = matrix[0].size();

        // traversing the array and marking the neighbours, if the cells are not 2 , incrementing the count.
        for (int i = 0; i < r; ++i)
        {
            for (int j = 0; j < c; ++j)
            {
                if (matrix[i][j] == '1')
                {
                    markNeighbours(matrix, r, c, i, j); // calling the function and marking visited cells as '2'
                    count++;                            // increasing count for each cell passing the if block
                }
            }
        }
        return count;
    }
};