class Solution {
public:
    int minInsertions(string s) {
        int n = s.size();
        vector<vector<int>> dp(n,vector<int> (n,0));
        int i,j,len;
        for(i=0;i<n;i++){
            dp[i][i] = 0;
        }
        for(len = 2;len<=n;len++){
            for(i=0;i<n-len+1;i++){
                int j = i+len-1;
                if(s[i] == s[j]){
                    dp[i][j] = dp[i+1][j-1];
                }else{
                    dp[i][j] = min(dp[i+1][j],dp[i][j-1]) + 1;
                }
            }
        }
        return dp[0][n-1];
    }
};