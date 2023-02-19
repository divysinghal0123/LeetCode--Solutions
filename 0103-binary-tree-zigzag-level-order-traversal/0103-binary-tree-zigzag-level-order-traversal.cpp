class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        q.push(root);
        int level = 0;
        while(!q.empty())
        {
            int sze = q.size();
            vector<int>lev;
            while(sze --)
            {
                TreeNode *tp = q.front();
                q.pop();
                lev.push_back(tp->val);
                if(tp->left) q.push(tp->left);
                if(tp->right) q.push(tp->right);
            }
            ans.push_back(lev);
        }

        for(int i=0;i<ans.size();++i) if(i % 2) reverse(ans[i].begin(), ans[i].end());
        return ans;
    }
};