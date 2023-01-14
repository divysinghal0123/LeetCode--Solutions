class Solution {
public:
   void comb(int s, int n, int k,vector<int>& tmp,vector<vector<int>>& ans){
        if(n-s+1<k) return;
        if(k==0){
            ans.push_back(tmp);
            return;
        }
        comb(s+1,n,k,tmp,ans);
        tmp.push_back(s);
        comb(s+1,n,k-1,tmp,ans);
        tmp.erase(tmp.end()-1);
    }
    vector<vector<int>> combine(int n, int k) {
       vector<vector<int>> ans;
       vector<int> tmp;
       comb(1,n,k,tmp,ans);
        return ans;
    }
};
