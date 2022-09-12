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
     vector<int> res;
    int sumNumbers(TreeNode* root) {
        recur(root,0);
        int sum = 0;
        for(int i = 0;i<res.size();i++){
            sum+=res[i];
}
        return sum;
    }
    void recur(TreeNode* root , int sum){
        if(root == NULL)return;
        sum+= root->val;
        if(root->left==NULL && root->right==NULL)res.push_back(sum);
        if(root->left!=NULL)recur(root->left,sum*10);
        if(root->right!=NULL)recur(root->right,sum*10);   
    }
};