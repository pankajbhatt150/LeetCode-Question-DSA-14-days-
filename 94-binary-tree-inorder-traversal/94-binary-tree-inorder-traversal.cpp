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
    vector<int> inorderTraversal(TreeNode* root) {
               if (!root) {
            return {};
        }

        vector<int> result;
        if (root->left) {
            result = inorderTraversal(root->left);
        }
        result.push_back(root->val);
        if (root->right) {

            vector<int> temp = inorderTraversal(root->right);
            for (int i = 0; i < temp.size(); i++) {
                result.push_back(temp[i]);
            }
            temp.clear();
        }
        

        return result;
  
        
        
    }
};