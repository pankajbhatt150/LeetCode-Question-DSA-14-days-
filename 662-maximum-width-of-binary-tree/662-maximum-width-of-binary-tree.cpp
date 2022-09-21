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
    int widthOfBinaryTree(TreeNode* root) {
            if(!root) return 0;
        int res = 0;
        queue<pair<TreeNode*,int>> q;
        q.push({root, 0});
        while(!q.empty()){
            int n = q.size();
            res = max(res, q.back().second - q.front().second + 1);
            int start = q.front().second;
            while(n--){
                TreeNode* p = q.front().first;
                long long ind = q.front().second - start;
                q.pop();
                if(p->left) q.push({p->left, ind*2 + 1});
                if(p->right) q.push({p->right, ind*2 + 2});
            }
        }
        return res;   
    }
};