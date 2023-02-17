class Solution {
public:
    void inorder(TreeNode* root, int& ans, int& prev)
    {
        if(root == NULL)
           return ;
        inorder(root->left,ans,prev);
        if(prev != -1)
             ans = min(ans,root->val-prev);
        prev = root->val;
        inorder(root->right,ans,prev);
    }
    int minDiffInBST(TreeNode* root) {
        int ans = INT_MAX;
        int prev = -1;
        inorder(root,ans,prev);
        return ans;   
    }
};
