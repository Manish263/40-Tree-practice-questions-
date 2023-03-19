bool isBalanced(TreeNode* root) {
        return dfsheight(root) !=-1;
    }
    
    int dfsheight(TreeNode* root) {
        int lh,rh;
        if(root==NULL) return 0;
        //counting left side length till leaf node and if we reach at end and find null then return -1
        lh=dfsheight(root->left);
        if(lh==-1) return -1;
  //counting right side length till leaf node and if we reach at end and find null then return -1
        rh=dfsheight(root->right);
        if(rh==-1) return -1;
        if(abs(lh-rh)>1) return -1;
        return  max(lh,rh)+1;;
    }
