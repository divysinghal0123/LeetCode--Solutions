class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        for(int k = 0;k<n;k++){
            if(nums[k]!=0){
                swap(nums[k],nums[i]);
                i++;
            }
        }
    }
};
