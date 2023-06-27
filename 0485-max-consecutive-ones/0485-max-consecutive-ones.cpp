class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxi = 0;
        int i;
        int n = nums.size();
        for(i=0;i<n;i++){
            if(nums[i] == 1){
                count++;
            }else{
                count = 0;
            }
            maxi = max(maxi,count);
        }
        return maxi;
    }
};