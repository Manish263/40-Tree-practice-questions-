class Solution {
public:
// O(N^2): solution would be simply make a height function that give maxDepth and then in main function simply compute the left height by calling hight function for left and do same for right.

// diamter of tree would be lh+rh and then return max of diamter by calling diamter for left and right subtree by calling fucntion to cacculate

    pair<int,int> dfs(TreeNode* root){
          // Base case: If the root is NULL, the height and diameter of the subtree are both zero.
        if (root==NULL) return {0,0};
        // Recursively compute the height and diameter of the left and right subtrees.
        auto left = dfs(root->left);
        auto right = dfs(root->right);
        // Compute the height of the current subtree as the maximum height between the left and right subtrees, plus one for the root node.
        int height = 1+max(left.first,right.first);
        // Compute the diameter of the current subtree as the maximum of the diameters of the left and right subtrees, and the diameter that passes through the root node.
        int diameter = max({left.second,right.second,left.first+right.first});
        //returned height and diamter.
        return {height,diameter};
    }

    int diameterOfBinaryTree(TreeNode* root) {
        // Call the DFS function to compute the height and diameter of the binary tree, and return the diameter.
        return dfs(root).second;
         
    }
};
