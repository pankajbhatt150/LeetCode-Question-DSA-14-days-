/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        
        //if no node is present in the given tree
        if(root==nullptr) return ans;

        // to store element at every level of tree
        vector<int> level;
        
        //to store the elements in level order 
        queue<TreeNode*> q;
        
        // insert the root first in the queue
        q.push(root);
        TreeNode *node;
        while(!q.empty()){
            
            // do not use queue size directly in for loop as it keeps on varying
            int size=q.size();
            
            // pop the parent nodes and push its children node
            for(int i=0; i<size; i++){
                node=q.front();
                q.pop();
                level.push_back(node->val);
                if(node->left!=nullptr){
                    q.push(node->left);
                }
                if(node->right!=nullptr){
                    q.push(node->right);
                }
            }
            // insert the level elements
            ans.push_back(level);
            
            //clear the level vector
            level.clear();
        }
        return ans;
    
        
    }
};