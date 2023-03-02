class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m = INT_MAX;
        int n = INT_MIN;
        int i;
        for(i=0;i<prices.size();i++){
            m = min(m,prices[i]);
            n = max(n,prices[i]-m);
        }
        return n;
    }
};
