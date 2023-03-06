class Solution {
public:

    void coverIsland(vector<vector<char>>& grid,int m,int n,int x,int y,int island){
        if(x >= 0 && y >= 0 && x < m && y < n && grid[x][y] == '1'){
            grid[x][y] = 'T';
            coverIsland(grid,m,n,x+1,y,island);
            coverIsland(grid,m,n,x,y+1,island);
            coverIsland(grid,m,n,x-1,y,island);
            coverIsland(grid,m,n,x,y-1,island);
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int island = 0;
        int m = grid.size();
        int n = grid[0].size();
        for(int i = 0;i < m;i++){
            for(int j = 0; j < n;j++){
                if(grid[i][j] == '1'){
                    coverIsland(grid,m,n,i,j,island);
                    island++;
                }
            }
        }
        return island;
    }
};