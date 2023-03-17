 vector<int> postorderTraversal(TreeNode* root) {
          vector<int>v,ls,rs;

         // Base case: If the root is NULL, return an empty vector
        if(root == NULL) return v;
        // Recursively traverse the left subtree and append its result to the result vector
        ls=postorderTraversal(root->left);
        for(int i=0;i<ls.size();i++){
            v.push_back(ls[i]);
        }

        //Recursively traverse the right subtree and append its result to the result vector
        rs=postorderTraversal(root->right);
        for(int i=0;i<rs.size();i++){
            v.push_back(rs[i]);
        }

         // Push the value of the root node into the result vector
        v.push_back(root->val);
        return v;
    }
