class Solution {
    private:
    void solve(TreeNode* &root, vector<int>&res){
        // base case
        if(!root) return;
        res.push_back(root->val);
        solve(root->left,res);
        solve(root->right,res);
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>res;
        solve(root,res);
        return res;
    }
};
