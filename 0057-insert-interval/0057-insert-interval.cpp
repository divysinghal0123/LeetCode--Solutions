class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        int i;
        for(i = 0; i < intervals.size() && intervals[i][1] < newInterval[0]; i++) {
            ans.push_back(intervals[i]);
        }
        for(; i < intervals.size() && intervals[i][0] <= newInterval[1]; i++) {
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
        }
        ans.push_back(newInterval);
        for(; i < intervals.size(); i++) {
            ans.push_back(intervals[i]);
        }
        return ans;
    }
};