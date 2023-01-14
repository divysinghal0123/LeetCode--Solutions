class Solution {
public:

    void helper(vector<string>&ans, string s, int ind){
        if(ind==s.size()){
            ans.push_back(s);
            return;
        }

        string temp = s;
        if(isalpha(s[ind])){
            if(temp[ind] > 91)temp[ind] = toupper(temp[ind]);
            else temp[ind] = tolower(temp[ind]);
            helper(ans,temp,ind+1);
        }
        helper(ans,s,ind+1);

    }

    vector<string> letterCasePermutation(string s) {
        vector<string>ans;

        helper(ans,s,0);

        return ans;
    }
};