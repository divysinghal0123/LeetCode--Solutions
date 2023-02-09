class Solution {
public:
   int jump(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>dp(n,1001);
        if(n==2)
        {return 1;}
        dp[n-1]=0;

        for(int i=n-2;i>=0;i--)
        {
            int curr;
            for(int j=1;j<=nums[i]&&j+i<n;j++)
            {
                curr=min(curr,dp[i+j]);
            }
            curr++;
            dp[i]=curr;
        }

        return dp[0];
        
    }
};