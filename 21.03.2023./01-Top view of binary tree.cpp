class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        vector<int>res;
        if(!root) return res;
//in map we inserted level and node as key value to get top view.
        map<int,int>m;
        queue<pair<Node*,int>>q;
//in queue we have inserted node with line.
        q.push({root,0});
        while(!q.empty()){
            auto it = q.front(); q.pop();
            Node* node = it.first;
            int line = it.second;
            if(m.find(line)==m.end()) m[line]=node->data;
            if(node->left!=NULL) q.push({node->left,line-1});
            if(node->right!=NULL) q.push({node->right,line+1});
        }
//we pushed map elements into vec.
        for(auto t: m){
            res.push_back(t.second);
        }
        return res;
    }

};
