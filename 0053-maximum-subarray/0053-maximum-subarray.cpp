class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];
        int temp = 0;
        int j;
        for(j=0;j<nums.size();j++){
            temp+=nums[j];
            if(temp > ans) ans = temp;
            if(temp < 0) temp = 0;
        }
        return ans;
    }
};