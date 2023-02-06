class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL){
            return NULL;
        }
       TreeNode* temp;
        invertTree(root->right);
        invertTree(root->left);
        
        temp = root->left;
        root->left = root->right;
        root->right = temp;
        
        return root;
    }
};