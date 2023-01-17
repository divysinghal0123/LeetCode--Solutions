class Solution {
public:
    int minFlipsMonoIncr(string s) {

        int one, zero = one = 0;
        for(auto &i : s)
            if(i == '0')
                zero++;

        int mn = zero;
        for(auto &i : s)
        {
            if(i == '0')
                zero--;
            else
                one++;

            mn = min(mn, one + zero);
        }

        return mn;
    }
};
