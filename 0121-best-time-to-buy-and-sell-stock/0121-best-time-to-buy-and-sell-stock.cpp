class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minm = INT_MAX;
        int maxm = INT_MIN;
        int i;
        for(i=0;i<prices.size();i++){
            minm = min(minm,prices[i]);
            maxm = max(maxm,prices[i]-minm);
        }
        return maxm;
    }
};