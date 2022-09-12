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
    int recursive(TreeNode* root, int& res) {
        if (root == nullptr) {
            return 0;
        }
        int l = recursive(root->left, res);//height of left subtree
        int r = recursive(root->right, res);//height of right subtree
        res = max(res, l + r);//height of right+left
        return 1 + max(l, r);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        recursive(root, res);
        return res;   
    }
};