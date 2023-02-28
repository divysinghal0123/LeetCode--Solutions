class Solution {
public:
    map<int,vector<TreeNode*>> m;

    int countNodes(TreeNode* r) {
        if(!r) return 0;
        int k = 1+countNodes(r->left)+countNodes(r->right);
        m[k].push_back(r);
        return k;
    }
    bool match(TreeNode* r,TreeNode* s) {
        if(!r && !s) return true;
        if(!r || !s) return false;
        
        return r->val == s->val && match(r->left,s->left) && match(r->right,s->right);
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        countNodes(root);
        vector<TreeNode*> ans;
        
        for(auto a:m) {
            vector<TreeNode*> v = a.second;
            for(int i=0; i<v.size(); i++) {
                int f=1;
                if(v[i]) // if not NULL
                for(int j=i+1; j<v.size(); j++) {
                    if(match(v[i],v[j])) {
                        if(f) { // flag to insert first matching value & NULL all duplicates
                            ans.push_back(v[j]);
                            f=0;
                        } 
                        v[j] = NULL; // eliminate dupliates
                    }
                }
            }
        }

        return ans;
    }
};