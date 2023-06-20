class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int i;
        for(i=0;i<n;i++){
            ans.push_back(nums[i]);
        }
        sort(nums.begin(),nums.end());
        // for(i=0;i<n;i++){
        //     nums[i] = nums[i];
        // }
    }
};