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
        
        return max(hr,hl)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        if(isBalanced(root->left) == false){
            return false;
        }
        if(isBalanced(root->right) == false){
            return false;
        }
        
        int lefth = height(root->left);
        int righth = height(root->right);
        if(abs(lefth - righth) <= 1){
            return true;
        }else{
            return false;
        }
    }
};