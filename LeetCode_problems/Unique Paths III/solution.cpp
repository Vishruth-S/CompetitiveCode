/*Brute Forced DFS solution*/

class Solution {
public:
    int paths = 0;
    int obstacles = 0;

    void dfs(vector<vector<int>>& grid, int x,int y,int walked, vector<vector<bool>> visited)
    {
        //Check if the position is out of boundries or the position is already visited
        if (x < 0 || x >= grid.size() || y < 0 || y >= grid[0].size() || grid[x][y] == -1 || visited[x][y])
        {
            return;
        }

        //If we arrivied at the ending square so increase the number of paths by one
        if (grid[x][y] == 2)
        {
            if (obstacles == walked - 1)
            {
                paths++;
            }
            return;
        }

        visited[x][y] = true;
        //Check Right Square
        dfs(grid,x+1,y,walked+1,visited);
        //Check Left Square
        dfs(grid,x-1,y,walked+1,visited);
        //Check Top Square
        dfs(grid,x,y+1,walked+1,visited);
        //Check Bottom Square
        dfs(grid,x,y-1,walked+1,visited);
        visited[x][y] = false;
    }

    int uniquePathsIII(vector<vector<int>>& grid) 
    {
       int startPosX = 0;
       int startPosY = 0;
       int id = 1;
       //Find the starting position
       for (int i = 0; i < grid.size(); i++)
       {
           for (int j = 0; j < grid[0].size(); j++)
           {
               if (grid[i][j] == 1)
               {
                   //Get the postion of starting square
                   startPosX = i;
                   startPosY = j;
               }
               else if(grid[i][j] == 0)
               {
                   obstacles++;
               }
           }
       }
       //Initialize the visited matrix
       vector<vector<bool>>visited(grid.size(),vector<bool>(grid[0].size(),false));
       dfs(grid,startPosX,startPosY,0,visited);
       return paths;
    }
};