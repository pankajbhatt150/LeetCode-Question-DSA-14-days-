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
   bool solve(TreeNode* root,double min,double max){
    if(root==NULL)
        return true;
    if(root->val>min && root->val<max){
        if(solve(root->left,min,root->val) && solve(root->right,root->val,max))
            return true;
        else return false; 
    }
    return false;  
}
bool isValidBST(TreeNode* root) {
    return solve(root,-DBL_MAX,DBL_MAX);
}
};