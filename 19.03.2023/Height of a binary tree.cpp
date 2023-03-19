 int maxDepth(TreeNode* root) {
        int lh,rh;
        if(root==NULL) return 0;
        //counting left side length till leaf node
        lh=maxDepth(root->left);
 //counting right side length till leaf node
       rh= maxDepth(root->right);
        
        return  max(lh,rh)+1;;
    }
