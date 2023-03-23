  bool help(TreeNode* left,TreeNode* right){
        //checking if root is null then true.
        if(left==NULL || right==NULL) return left==right;
    //if left root is not equal to right root node tree isn't symmetric
        if(left->val !=right->val) return false;
    //we do inorder traversal simultaneously on left and right subtrees.
    //in which we calling left->left of left subtree and on the other hand we call right->right subtree. that's the property of mirror.
        return (help(left->left, right->right) && help(left->right,right->left));
    }
    bool isSymmetric(TreeNode* root) {
        if(root ==NULL ) return true;
        return help(root->left,root->right);

    }
