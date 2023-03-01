class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int> ans;
        int hash[(int)(1e5+1)] = {};
        int k = 5*(1e4);
        for(auto e:nums) hash[k+e]++;
        for(int i = 0; i<=2*k; i++){
            while(hash[i]-- > 0) ans.push_back(i-k);
        }
        return ans;
    }
};