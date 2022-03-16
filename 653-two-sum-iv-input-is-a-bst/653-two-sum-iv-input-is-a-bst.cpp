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
	bool isPresent(TreeNode* root,int val,TreeNode* used)
	{
		if(!root) return 0;
		if(root->val==val && root != used) return 1;
		if(root->val>val) return isPresent(root->left,val,used);

		return isPresent(root->right,val,used);
	}
	bool traverse(TreeNode* r,int k,TreeNode* root)
	{
		if(!r) return false;

		 return 
		 traverse(r->left,k,root)  ||
		 traverse(r->right,k,root) || 
		 isPresent(root,k-(r->val),r);//Do || and write at the  end the function
	}
	bool findTarget(TreeNode* root, int k) 
	{
		return traverse(root,k,root);
	}
};