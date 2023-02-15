class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
        vector<int> res;
        int c = 0, kTemp = k, val;

        for(int i=num.size()-1;i>=0;i--) {
            val = (c + (kTemp%10) + num[i]);
            res.push_back(val%10);
            c = val/10;
            kTemp/=10;
        }

        while(kTemp > 0) {
            val = c + (kTemp%10);
            res.push_back(val%10);
            c = val/10;
            kTemp/=10;
        }

        if(c > 0)
            res.push_back(c);

        reverse(res.begin(), res.end());

        return res;

    }
};