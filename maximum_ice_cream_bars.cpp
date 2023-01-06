class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int ans=0;
        sort(costs.begin(),costs.end());
        for(int j=0;j<costs.size();j++){
            if(coins>=costs[j]){
                coins-=costs[j];
                ans++;
            }
        }
        return ans;
    }
};
