class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if( n == 0) return 0;
        if( n == 1) return nums[0];
        int count = 0;
        int i = 0;
        int j = 1;
        while(i < n){
            if(nums[i] != nums[j]){
                count = nums[i];
                break;
            }
            i+=2;
            j+=2;
            
        }
        return count;
    }
};