 vector<int> preorderTraversal(TreeNode* root) {
        vector<int>v,ls,rs;
        if(root == NULL) return v;
        v.push_back(root->val);

         // Recursively traverse the left subtree and append its result to the result vector
        ls=preorderTraversal(root->left);
        for(int i=0;i<ls.size();i++){
           v.push_back(ls[i]);
        }

        // Recursively traverse the right subtree and append its result to the result vector
        rs=preorderTraversal(root->right);
        for(int i=0;i<rs.size();i++){
           v.push_back(rs[i]);
        }
        return v;

    }
