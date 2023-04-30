class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int> sum(10001, 0), ans(10001, 0);
        for (auto& n : nums)
            sum[n] += n;
        ans[1] = sum[1];
        for (int i = 2; i < sum.size(); i++)
            ans[i] = max(ans[i-1], ans[i-2] + sum[i]);
        return ans.back();
    }
};