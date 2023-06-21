class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        
        int element = INT_MIN;
        int i;
        for(i=0;i<n;i++){
            if(count == 0){
                count = 1;
                element = nums[i];
            }
            else if(nums[i] == element) count++;
            else count--;
        }
        return element;
    }
};