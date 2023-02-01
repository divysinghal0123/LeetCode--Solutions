class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        queue<int> q;
        vector< vector<int>> ans(r,vector<int> (c,0));
        int m=mat.size();
        int n=mat[0].size();
        if(m*n!=r*c)
        {
            return mat;
        }
       
        for(auto& row: mat)
        {
            for(auto i: row)
            {
                q.push(i);
            }
        }
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
               ans[i][j]=q.front();
                q.pop();
            }
            
        }
        
        return ans;

    }
};