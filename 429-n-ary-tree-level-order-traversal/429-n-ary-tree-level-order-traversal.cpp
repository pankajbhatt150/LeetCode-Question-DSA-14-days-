/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
      queue<Node*> q;
    vector<vector<int>> ans;
    vector<int> res;
    
    if(!root)
        return ans;
    
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        
        Node* temp = q.front();
        q.pop();
        
        if(temp == NULL){
            ans.push_back(res);
            res.clear();
            if(!q.empty()) q.push(NULL);
        }
        
        else{
            res.push_back(temp ->val);
            for(auto itr : temp->children){
                q.push(itr);}
        }
        
        
    }
    
    return ans;
      
    }
};