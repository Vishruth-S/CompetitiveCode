/*
Input : m X n grid with non-negative integers
Return : minimum path sum from top left to bottom right


Logic : The first column can only be reached by moving down from the top left.
        Similarly first row can only be reached by moving right from the top left.
        Update the first row and first column by the sum of previous elements in grid.
        The remaining elements can be reached by either moving right from the previous element or by moving down from the above element.
        Hence the minimum path to reach is the minimum sum of the two elements(previous or above element).
        The elements is updated with minimum sum until the bottom right element is reached.
        The value of the bottom most element is minimum path sum. 

        Runtime - O(m * n)
*/

class Solution {
    public int minPathSum(int[][] grid) {
        for(int i=1;i<grid.length;++i){
            grid[i][0] += grid[i-1][0]; //moving down from top left and summing
        }
        for(int j=1;j<grid[0].length;++j){
            grid[0][j] += grid[0][j-1]; //moving right from top left and summing
        }
        for(int i = 1;i<grid.length;++i){
            for(int j = 1;j<grid[0].length;++j){
                    grid[i][j] += Math.min(grid[i][j-1],grid[i-1][j]);
            }
        }
        return grid[grid.length-1][grid[0].length-1];
    }
}