class Solution {
      void solve(vector<vector<int>> &ans,int index,vector<int> nums){
        if(index>=nums.size()){
            ans.push_back(nums);
            return ;
        }
        for(int i=index;i<nums.size();i++){
            swap(nums[i],nums[index]);
            solve(ans,index+1,nums);
            swap(nums[i],nums[index]);
        }
    }
public:
  
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index=0;
        solve(ans,index,nums);
        return ans;
    }
};