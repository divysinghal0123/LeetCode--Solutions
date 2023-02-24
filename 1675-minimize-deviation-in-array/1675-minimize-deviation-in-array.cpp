class Solution {
public:
    int minimumDeviation(vector<int> &nums) {
        set<int> s;
        for (int x: nums) {
            if (x % 2)s.insert(x * 2);
            else s.insert(x);
        }
        int res = *s.rbegin() - *s.begin();
        while (true) {
            int x = *s.rbegin();
            if (x % 2 == 0) {
                s.erase(x);
                s.insert(x / 2);
                res = min(res, *s.rbegin() - *s.begin());
            } else break;
        }
        return res;
    }
};