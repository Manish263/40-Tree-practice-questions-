class Solution {
public:
    void rightView(TreeNode* root,int level,vector<int>&res){
        if(!root) return;
        // Check if the current level is equal to the size of the result vector. If it is, push the current node value to the result vector.
        if(level==res.size()) res.push_back(root->val);
        //calling recursively rightView with each time level+1 doing
        rightView(root->right,level+1,res);
        rightView(root->left,level+1,res);

    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>res;
        rightView(root,0,res);
        return res;
    }
};
