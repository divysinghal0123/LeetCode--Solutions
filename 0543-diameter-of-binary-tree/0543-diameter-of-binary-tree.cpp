/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int hr = height(root->right);
        int hl = height(root->left);
        
        return max(hr,hl) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root == NULL){
            return 0;
        }
        int rheight = height(root->right);
        int lheight = height(root->left);
        
        int curr = lheight+rheight;
        
        int rdia =  diameterOfBinaryTree(root->right);
        int ldia =  diameterOfBinaryTree(root->left);
        
        return max(curr,max(rdia,ldia));
        
    }
};