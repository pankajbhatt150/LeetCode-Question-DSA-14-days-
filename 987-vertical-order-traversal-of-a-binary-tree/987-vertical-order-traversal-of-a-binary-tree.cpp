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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
    vector<vector<int>>res;
        if(root==NULL)
            return res;
        
        map<int,map<int,vector<int>>>m;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        
        int level=0;
        while(!q.empty())
        {
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                auto u=q.front();
                q.pop();
                TreeNode* curr=u.first;
                int ind=u.second;
                m[ind][level].push_back(curr->val);
                
                if(curr->left)
                    q.push({curr->left,ind-1});
                if(curr->right)
                    q.push({curr->right,ind+1});
            }
            level++;
        }
        for(auto x:m)
        {
            vector<int>vec;
            for(auto y:x.second)
            {
                vector<int>temp=y.second;
                sort(temp.begin(),temp.end());
                vec.insert(vec.end(),temp.begin(),temp.end());
            }
            res.push_back(vec);
        }
        return res;   
    }
};