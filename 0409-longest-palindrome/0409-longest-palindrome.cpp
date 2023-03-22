class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> counts;
        for(auto c: s)
          counts[c]++;

        int result = 0;
        bool odd_count = false;

        for(auto c :counts){
            if(c.second %2 == 0)
             result +=c.second;
            else{
                odd_count = true;
                result += c.second -1;
            }
        }
        if(odd_count) result++;
        return result;
    }
};