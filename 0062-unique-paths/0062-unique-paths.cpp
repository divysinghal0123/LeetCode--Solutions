class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>  mat(n , vector<int>(m, 0));
        
        for (int i = 0; i < m; ++i)mat[0][i] = 1;
        for (int i = 0; i < n; ++i)mat[i][0] = 1;
        
        for (int i = 1; i < n; ++i){
          for (int j = 1; j < m; ++j){
            mat[i][j] = mat[i][j-1] + mat[i-1][j];
          }
        }
        
        return mat[n-1][m-1];
        
    }
};