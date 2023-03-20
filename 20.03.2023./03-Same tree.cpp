class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        //we check if both of root's are null
        if(!p &&!q) return true;
        //if either of their root is not null we return false
        if(!p || !q) return false;

    
   //then we check their values are same or not. if equal we recursively call for left and right subtree to check for leaf nodes are same or not.
        return ( (p->val == q->val) && isSameTree(p->left,q->left) &&isSameTree(p->right,q->right) );
    }
};
