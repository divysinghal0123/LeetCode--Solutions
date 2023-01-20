class Solution {
public:
    set<vector<int>>s;
    void f(int ind,vector<int>&v,vector<int>tmp)
    {
        if(ind>=v.size())
        {
            if(tmp.size()>=2)s.insert(tmp);
            return ;
        }

        f(ind+1,v,tmp);
        if(tmp.size()==0 || tmp.back()<=v[ind])
        {
            tmp.push_back(v[ind]);
            f(ind+1,v,tmp);
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int>tmp;
        vector<vector<int>>ans;
        f(0,nums,tmp);
        for(auto x:s)ans.push_back(x);
        return ans;
        
    }
};