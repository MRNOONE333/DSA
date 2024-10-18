vector<int>ans;
    void Inorder(TreeNode * root){
        if(!root)return;
        Inorder(root->left);
        ans.push_back(root->val);
        Inorder(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        Inorder(root);
        return ans;
    }