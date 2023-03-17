  vector<int>v,ls,rs;

         // Base case: If the root is NULL, return an empty vector
        if(root == NULL) return v;
        // Recursively traverse the left subtree and append its result to the result vector
        ls=inorderTraversal(root->left);
        for(int i=0;i<ls.size();i++){
            v.push_back(ls[i]);
        }

         // Push the value of the root node into the result vector
        v.push_back(root->val);

        //Recursively traverse the right subtree and append its result to the result vector
        rs=inorderTraversal(root->right);
        for(int i=0;i<rs.size();i++){
            v.push_back(rs[i]);
        }
        return v;
    }
