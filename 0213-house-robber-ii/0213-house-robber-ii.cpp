class Solution {
public:
  int solve(vector<int>& nums,vector<int>& dp,int n)
    {
        if(n==0)
            return nums[0];

         if(n<0)
            return 0;       
        if(dp[n]!=-1)
            return dp[n];
        int pick=nums[n]+solve(nums,dp,n-2);
        int not_pick=solve(nums,dp,n-1);
        return dp[n]=max(pick,not_pick);        
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums[0];
        vector<int>temp1,temp2;
        for(int i=0;i<n-1;i++)
            temp1.push_back(nums[i]);

        for(int i=1;i<n;i++)
            temp2.push_back(nums[i]);

        vector<int>dp(temp1.size(),-1);
        int a=solve(temp1,dp,temp1.size()-1);
        vector<int>dp2(temp2.size(),-1);
        int b=solve(temp2,dp2,temp2.size()-1);
        return max(a,b);
    }
};