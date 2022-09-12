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
    TreeNode* merge(TreeNode* root1, TreeNode* root2){
        if(root1==NULL && root2==NULL) return NULL;// base case 
        if(root1==NULL) return root2;
        if(root2==NULL) return root1;
        // we will create newnode for sum of nodes 
        TreeNode *newNode = new TreeNode(root1->val+root2->val); // here we are using preorder traversal 
        // Now we will check recursively left and right subtree
        newNode->left=merge(root1->left,root2->left);
        newNode->right=merge(root1->right,root2->right);
        return newNode;
    }
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        return merge(root1,root2);
        
        
    }
};