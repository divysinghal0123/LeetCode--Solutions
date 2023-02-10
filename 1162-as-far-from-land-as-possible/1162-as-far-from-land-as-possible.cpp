class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int n=grid.size();
        int dist=0;
        queue<pair<int,int>>q ;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    q.push({i,j});
                }
            }
        }
if(q.size() == 0 || q.size() == n*n) return -1;
        while(!q.empty())
        {
            int size=q.size() ;
            for(int k=0;k<size;k++)
            {
                int r=q.front().first ;
                int c=q.front().second ;
                 q.pop();
                 if(r>0 && grid[r-1][c]==0)
                    {
                        grid[r-1][c]=1;
                        q.push({r-1,c}) ;
                    }
                if(r+1<n && grid[r+1][c]==0)
                {
                    grid[r+1][c]=1;
                    q.push({r+1,c});
                }
                if(c>0 && grid[r][c-1]==0)
                {
                    grid[r][c-1]=1;
                    q.push({r,c-1});
                }
                if(c+1<n && grid[r][c+1]==0)
                {
                    grid[r][c+1]=1;
                    q.push({r,c+1});
                }

            }
            if(q.size())
              dist++;
        }
        return dist ;

    }
};
