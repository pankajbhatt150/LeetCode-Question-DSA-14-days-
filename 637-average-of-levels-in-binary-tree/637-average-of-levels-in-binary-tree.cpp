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
    vector<double> averageOfLevels(TreeNode* root) {
    	vector<double> ans;
		if(root==NULL)return ans;
		queue<TreeNode*> q;
		q.push(root);
		while(!q.empty()){
			int t = q.size();
			long long sum = 0;
			for(int i=0;i<t;++i){
				auto x = q.front();
				q.pop();
				sum += x->val;
				if(x->left){
					q.push(x->left);
				}
				if(x->right){
					q.push(x->right);
				}
			}
			ans.push_back(double(sum/(double(t))));
		}
		return ans;    
    }
};