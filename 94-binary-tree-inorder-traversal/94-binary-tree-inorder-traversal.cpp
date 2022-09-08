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
            //  Checks if the pointer passed to the function is nullptr. For beginners, it's
//         enough to write !root or "not root" because nullptr in a conditional statement
//         will return false. Writing 'if (root == nullptr)' is just a bit long-winded.
        if (!root) {
            return {};
        }
        
//         The idea with these recursive calls is to repeat the same process
//         in a particular order. Make your first recursive call to the left node
//         if it exists, before you add the val of the current node to the result vector.
//         This is sort of the "trust me bro" part of recursive programming because 
//         you have to imagine or trust that all the stuff on the left side of the tree
//         just finished, so we can put it all into result. Then you write the code to
//         actually do that.
        vector<int> result;
        if (root->left) {
            result = inorderTraversal(root->left);
        }
//         Everything on the left just finished so now we can put the current val
//         into the result vector.
        result.push_back(root->val);
        
//         The last step is to repeat the process for the right subtree so we check
//         root->right. As a quick note, if both root->left and root->right are false,
//         that means we're on a leaf node and we don't need to make any recursive calls.
        if (root->right) {
            
//             Whereas before with the left subtree we could simply set result equal to the
//             return value of inorderTraversal(), with the right subtree we have to add the 
//             elements to result so we don't overwrite any of the previous traversal steps.
            vector<int> temp = inorderTraversal(root->right);
            for (int i = 0; i < temp.size(); i++) {
                result.push_back(temp[i]);
            }
            temp.clear();
        }
        
//         As a quick recap, if both root->right and root->left are nullptr, we're on a 
//         leaf node and the function will just return the vector {root->val}. Otherwise every 
//         recursive call will return a full in order traversal of the left sub tree
//         until it gets back to the original root of the tree, where it will return
//         the vector {left subtree, root->val, right subtree} and stop.
        return result;
  
        
        
    }
};