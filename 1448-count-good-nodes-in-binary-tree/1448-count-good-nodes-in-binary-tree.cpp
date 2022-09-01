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
    void fun(TreeNode* root,int &ans,int x)
    {
        if(root==NULL)
            return;
        if(root->val>=x)
            ans++;
        x=max(root->val,x);
        fun(root->left,ans,x);
        fun(root->right,ans,x);
    }
    
    int goodNodes(TreeNode* root) {
        int ans=0;
        fun(root,ans,INT_MIN);
        return ans;
    }
};