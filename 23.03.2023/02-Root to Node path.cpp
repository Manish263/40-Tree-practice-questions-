bool path(TreeNode* root, int b, vector<int>& res) {
    if (!root) {
        return false;
    }
    if (root->val == b) {
        res.push_back(root->val);
        // We have found the target node, so we don't need to go further down
        return true;
    }
    
    if(path(root->left, b, res) || path(root->right, b, res))
    {
        res.push_back(root->val);
        return true;
    }
    return false;
}

vector<int> Solution::solve(TreeNode* a, int b) {
    vector<int> res;
    path(a, b, res);
    reverse(res.begin(),res.end());
    return res;
}
