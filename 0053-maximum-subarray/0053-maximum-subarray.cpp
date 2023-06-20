class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];
        int temp = 0;
        int i;
        int n = nums.size();
        for(i=0;i<n;i++){
            temp = temp + nums[i];
            if(temp > ans) ans = temp;
            if(temp < 0) temp = 0;
        }
        return ans;
    }
};