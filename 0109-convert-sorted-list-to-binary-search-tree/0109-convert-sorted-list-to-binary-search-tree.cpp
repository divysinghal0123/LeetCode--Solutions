class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> inorder;
        while(head!=NULL){
            inorder.push_back(head->val);
            head=head->next;
        }
        return insert(inorder, 0, inorder.size()-1);
    }
private:
    TreeNode* insert(vector<int>& inorder, int start, int end) {
        if(start>end)return NULL;
        int mid=(start+end)/2;
        TreeNode* root = new TreeNode(inorder[mid]);
        root->left=insert(inorder, start, mid-1);
        root->right=insert(inorder, mid+1, end);
        return root;
    }
};