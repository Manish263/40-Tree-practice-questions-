class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int sum=INT_MIN;
        dfsSum(root,sum);
        return sum;
    }

private: 
    int dfsSum(TreeNode* root,int& sum){
            if(!root){
                return 0;
            }
             int lh = max(0, dfsSum(root->left, sum)); 
             // Ignore negative contributions from left subtree
        int rh = max(0, dfsSum(root->right, sum)); 
        // Ignore negative contributions from right subtree
        sum = max(sum, root->val + lh + rh); 
        // Update sum with the maximum path sum seen so far
        return root->val + max(lh, rh);
         // Compute the maximum sum of a path that includes the current node as the highest point
    }
};
